let fs = require("fs");
const { strict } = require("assert");
let input = fs.readFileSync("dev/stdin").toString().split("\n");

// console.log(input);

// const last = input[input.length - 1].split("\n");
const word = input[1];
console.log(typeof word);
const text = input[0];
console.log(text);
console.log(word);

strict.lower;
