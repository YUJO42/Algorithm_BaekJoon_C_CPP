/**
 * @param {number} n
 * @return {number}
 */

// @@@@ time out code (recursion) @@@

var tribonacci = function (n) {
  if (n === 0) return 0;
  if (n === 1) return 1;
  if (n === 2) return 1;
  if (n === 3) return 2;

  return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
};

// @@@@ version1. 50.27%
var array = [0, 1, 1, 2];

var tribonacci = function (n) {
  for (var i = 4; i <= 37; i++) {
    array[i] = array[i - 1] + array[i - 2] + array[i - 3];
  }
  return array[n];
};

// @@@@ version2. 21.01%
// var array = [0, 1, 1, 2];

// function dp_tribonacci(n) {
//   for (var i = 4; i <= n; i++) {
//     array[i] = array[i - 1] + array[i - 2] + array[i - 3];
//   }
//   return array[n];
// }

// var tribonacci = function (n) {
//   return dp_tribonacci(n);
// };

var array = [0, 1, 1, 2];

var tribonacci = function (n) {
  for (var i = 4; i <= n; i++) {
    array[i] = array[i - 1] + array[i - 2] + array[i - 3];
  }
  return array[n];
};

// test code

console.log(tribonacci(4)); // 4
console.log(tribonacci(25)); // 1389537
console.log(tribonacci(37)); // 2082876103
