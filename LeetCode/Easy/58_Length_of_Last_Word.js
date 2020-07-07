/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function (s) {
  const arr = s.trim().split(" ");
  return arr[arr.length - 1].length;
};

// test code

console.log(lengthOfLastWord("Hello World")); // output : 5
console.log(lengthOfLastWord("a ")); // output : 1
