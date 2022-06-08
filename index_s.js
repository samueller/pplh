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

const genQuery1 = (top) => {
    let convertOp = (op) => {
        switch (op) {
            case 'lor':
                return '||';
            case 'land':
                return '&&';
            case 'leq':
                return '<=>';
            case 'lnot':
                return '!';
            case 'lxor':
                return '^';
            default:
                console.error("Unknown operator: " + op);
        }
    };

    if (top.children[0].type === '(') {
        return genQuery1(top.children[1]);
    }

    if (top.children[0].type === 'query') {
        let code = "";
        code = '(' + genQuery1(top.children[0]);

        if (top.children[1].type === 'op') {
            const op = convertOp(top.children[1].children[0].type);
            code += ' ' + op + ' ' + genQuery1(top.children[2]);
        }

        code += ')';
        return code;
    }

    if (top.children[0].type === 'identifier') {
        return top.children[0].text;
    }
}

const genQuery = (top) => {
    let code = "";

    // Find condition
    if (top.children[3].type == 'cond') {
        const ccode = genQuery1(top.children[3].children[1]);
        code += `\nlet _ = observe ${ccode} in`;
    }

    return code;
};

const genDice = async (tree) => {
    try {
        let vars = tree.children
            .filter(child => child.type == 'edges')
            .reduce(addParents, {});
        vars = tree.children
            .filter(child => child.type == 'imports')
            .reduce(importData, vars);
        let code = await bayesianNetwork(await vars);

        code += genQuery(tree.children
            .find(child => child.type == 'probability'));

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
        transpile();
    });

async function transpile() {
    const tree = parser.parse(pplh.value);
    const diceCode = await genDice(tree.rootNode);
    dice.innerHTML = diceCode;
}

pplh.addEventListener('input', transpile);