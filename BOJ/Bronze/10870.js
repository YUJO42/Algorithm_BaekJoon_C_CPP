const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().split(" ");

// 0 > 1 > 1 > 2
n = input[0];

function fibo(n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fibo(n - 2) + fibo(n - 1);
}

console.log(fibo(n));
