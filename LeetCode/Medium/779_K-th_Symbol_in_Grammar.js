/**
 * @param {number} N
 * @param {number} K
 * @return {number}
 *
 */

/*
 ** row1 : 0
 ** row2 : 01
 ** row3 : 0110
 ** row4 : 0110 1001
 ** row5 : 0110 1001 1001 0110
 ** row6 : 0110 1001 1001 0110 1001 0110 0110 1001
 ** row7 : 0110 1001 1001 0110 1001 0110 0110 1001 1001 0110 0110 1001 0110 1001 1001 0110
 */
// arr = [
//   [0],
//   [0, 1],
//   [0, 1, 1, 0],
//   [0, 1, 1, 0, 1, 0, 0, 1],
//   [0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0],
// ];

// @@@@@@@@@@ 성공 1
// var kthGrammar = function (N, K) {
//   if (N == 1) return 0;
//   if (K % 2 == 0) return kthGrammar(N - 1, K / 2) == 0 ? 1 : 0;
//   else return kthGrammar(N - 1, (K + 1) / 2) == 0 ? 0 : 1;
// };

// @@@@@@@@@@@ 성공 2
// var kthGrammar = function (N, K) {
//   if (N == 1) return 0;
//   return (~K & 1) ^ kthGrammar(N - 1, (K + 1) / 2);
// };

// @@@@@@@@@@@@ 성공 3
var kthGrammar = function (N, K) {
  var cnt = 0;
  --K;
  while (K) {
    cnt += K & 1;
    K >>= 1;
  }
  return cnt % 2;
};

// @@@@@@@@@@@@@ Fail
// if (N == 1) {
//   return 0;
// } else {
//   if (K % 2 == 1) {
//     return kthGrammar(N - 1, K / 2 + 1);
//   } else {
//     return kthGrammar(N - 1, K / 2);
//   }
// }

// test code

console.log(kthGrammar(1, 1)); // 0
console.log(kthGrammar(2, 1)); // 0
console.log(kthGrammar(2, 2)); // 1
console.log(kthGrammar(4, 5)); // 1
console.log(kthGrammar(5, 6)); // 0
console.log(kthGrammar(10, 6)); // 0
