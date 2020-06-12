// BOJ JS input

const fs = require("fs");
const { match } = require("assert");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

// test code

// const input = [
//   "13",
//   "but",
//   "i",
//   "wont",
//   "hesitate",
//   "no",
//   "more",
//   "no",
//   "more",
//   "it",
//   "cannot",
//   "wait",
//   "im",
//   "yours",
// ];

input.shift();
const map = new Map();

for (let i = 0; i < input.length; i++) {
  map.set(input[i], input[i].length);
}

const sortedMap = new Map(
  [...map.entries()].sort((x, y) => {
    if (x[1] === y[1]) {
      let i = 0;
      while (1) {
        if (x[0][i] !== y[0][i]) {
          return x[0][i] > y[0][i] ? 1 : -1;
        }
        i++;
      }
    }
    return x[1] - y[1];
  })
);

const arr = [...sortedMap.keys()];

for (let i = 0; i < arr.length; i++) {
  console.log(arr[i]);
}
