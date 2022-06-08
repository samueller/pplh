const addParent = (vars, child, parent) => {
    if (vars[child])
        vars[child].parents.push(parent)
    else
        vars[child] = { parents: [parent] }
}

const addParents = (vars, edgesNode) => {
    if (edgesNode.child(0).type == 'identifier')
        addParent(vars, edgesNode.child(2).text, edgesNode.child(0).text)
    else if (edgesNode.child(0).type == 'edges') {
        addParent(vars, edgesNode.child(2).text, edgesNode.child(0).child(2).text)
        addParents(vars, edgesNode.child(0))
    }
    return vars
}

const cptIndex = colIndexes => vars => values =>
    (vars || []).reduce((index, variable, i) =>
        index + (2 ** i) * values[colIndexes[variable]],
        0);

const importData = async (vars, importNode) => {
    const response = await fetch(importNode.child(2).text)
    const data = await response.text()
    const lines = data.split('\n')
    const cols = lines[0].split(',').reduce((cols, col, i) => {
        cols[0].push(col)
        cols[1][col] = i
        if (!vars[col])
            vars[col] = { cpt: [[0, 0]] }
        else if (!vars[col].cpt)
            vars[col].cpt = Array(2 ** vars[col].parents.length).fill().map(_ => [0, 0])
        return cols
    }, [[], {}])
    lines.slice(1).forEach(line => {
        line = line.split(',')
        if (line.length != cols[0].length)
            return
        cols[0].forEach(col => {
            const index = cptIndex(cols[1])(vars[col].parents)(line)
            vars[col].cpt[index][0] += parseInt(line[cols[1][col]])
            vars[col].cpt[index][1]++
        })
    })
    return vars
}

const topolSort = vars => visited => sorted => nodes => {
    nodes.forEach(node => {
        if (!visited.has(node)) {
            visited.add(node)
            if (vars[node].parents)
                topolSort(vars)(visited)(sorted)(vars[node].parents)
            sorted.push(node)
        }
    })
}

const prob = cptEntry => cptEntry[0] / cptEntry[1];
const oneZero = num => num == 0 ? '0.0' : num == 1 ? '1.0' : num;
const nestedIf = vars => variable => parentsLeft => index => depth =>
    parentsLeft.length == 1
        ? `${depth ? '(' : ''}if ${parentsLeft[0]} then flip ${oneZero(prob(vars[variable].cpt[index + 2 ** depth]))} else flip ${oneZero(prob(vars[variable].cpt[index]))}${depth ? ')' : ''}`
        : `${depth ? '(' : ''}if ${parentsLeft[0]} then\n${'\t'.repeat(depth + 2)}${nestedIf(vars)(variable)(parentsLeft.slice(1))(index + 2 ** depth)(depth + 1)}\n${'\t'.repeat(depth + 1)}else\n${'\t'.repeat(depth + 2)}${nestedIf(vars)(variable)(parentsLeft.slice(1))(index)(depth + 1)}${depth ? ')' : ''}`

const bayesianNetwork = vars => {
    const sorted = []
    topolSort(vars)(new Set())(sorted)(Object.keys(vars))
    return sorted.map(variable => vars[variable].parents
        ? `let ${variable} = ${nestedIf(vars)(variable)(vars[variable].parents)(0)(0)} in`
        : `let ${variable} = flip ${oneZero(prob(vars[variable].cpt[0]))} in`
    ).join('\n')
}

const genDice = async (tree) => {
    try {
        let vars = tree.children
            .filter(child => child.type == 'edges')
            .reduce(addParents, {});
        vars = tree.children
            .filter(child => child.type == 'imports')
            .reduce(importData, vars);
        let code = await bayesianNetwork(await vars);
        return code
    } catch (err) {
        return "Transpilation error: " + err;
    }
}

let parser
const Parser = window.TreeSitter,
    pplh = document.getElementById('pplh'),
    dice = document.getElementById('dice');

Parser.init()
    .then(() => Parser.Language.load('tree-sitter-pplh.wasm'))
    .then(PPLH => {
        parser = new Parser
        parser.setLanguage(PPLH)
        pplh.disabled = false
    });

pplh.addEventListener('input', async e => {
    const tree = parser.parse(e.target.value);
    const diceCode = await genDice(tree.rootNode);
    dice.innerHTML = diceCode;
});