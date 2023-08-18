const Parser = require("../tree-sitter/lib/TODO");
const TOML = require("tree-sitter-toml");

const parser = new Parser();
parser.setLanguage(TOML);

const sourceCode = `
  [hello]
  world = true
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());
