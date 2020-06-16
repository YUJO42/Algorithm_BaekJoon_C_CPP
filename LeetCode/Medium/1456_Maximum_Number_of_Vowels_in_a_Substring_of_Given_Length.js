/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */

// solution 1 : Brute-Force
// result     : Time Limit Exceeded

// var maxVowels = function (s, k) {
//   const arr = ["a", "e", "i", "o", "u"];
//   let max = 0;

//   for (let i = 0; i < s.length; i++) {
//     if (arr.indexOf(s[i] !== -1)) {
//       let count = 0;
//       for (let j = 0; j < k && i + j < s.length; j++) {
//         if (arr.indexOf(s[i + j]) !== -1) {
//           count++;
//         }
//       }
//       if (count > max) {
//         max = count;
//       }
//     }
//   }
//   return max;
// };

// solution 2 : Brute-Force (add conditon)
// result     : Time Limit Exceeded

// var maxVowels = function (s, k) {
//   if (s.length === 0) {
//     return 0;
//   }
//   const arr = ["a", "e", "i", "o", "u"];
//   let max = 0;

//   for (let i = 0; i < s.length; i++) {
//     if (max === k) {
//       break;
//     }
//     if (arr.indexOf(s[i] !== -1)) {
//       let count = 0;
//       for (let j = 0; j < k && i + j < s.length; j++) {
//         if (arr.indexOf(s[i + j]) !== -1) {
//           count++;
//         }
//       }
//       if (count > max) {
//         max = count;
//       }
//     }
//   }

//   return max;
// };

// solution 3 :
// result     : success

var maxVowels = function (s, k) {
  const arr = ["a", "e", "i", "o", "u"];
  let max = 0;
  for (let i = 0, count = 0; i < s.length; i++) {
    if (arr.indexOf(s[i]) !== -1) {
      count++;
    }
    if (i >= k && arr.indexOf(s[i - k]) !== -1) {
      count--;
    }
    max = Math.max(count, max);
  }
  return max;
};

// test code

const s1 = "abciiidef";
const s2 = "aeiou";
const s3 = "leetcode";
const s4 = "rhythms";
const s5 = "tryhard";

console.log(maxVowels(s1, 3)); // output : 3
console.log(maxVowels(s2, 2)); // output : 2
console.log(maxVowels(s3, 3)); // output : 2
console.log(maxVowels(s4, 4)); // output : 0
console.log(maxVowels(s5, 4)); // output : 1
