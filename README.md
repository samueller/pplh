# PPLH

PPLH is a domain-specific probabilistic programming language for health applications. PPLH transpiles to the PPL [Dice](https://github.com/SHoltzen/dice).

## Usage

To install dependencies and build, first install Rust and Emscripten, then run in a shell where `emcc` is available

```shell
npm install
npm run build
```

This will build the language parser source files and `tree-sitter-pplh.wasm` from `grammar.js`.

Note: does not work on Windows currently

Since the transpiler builds to pure JS and WebAssembly, you can serve it directly using your favorite HTTP server

```
python3 -m http.server
```

## Sample Usage

To read the sample data with and create a graph

```pplh
age → aspirin → heart_attack
age → heart_attack
cholesterol → heart_attack

import "health_records.csv"

Pr(heart_attack|age,aspirin)
```

Probabilities can be complex with disjunction, equality, and exclusive-or operators in both the query and condition parts:

```pplh
Pr(heart_attack+aspirin|(age,aspirin)+(!age,cholestrol,aspirin))
Pr(age | aspirin = cholesterol ∨ aspirin ⊕ ¬heart_attack)
```
