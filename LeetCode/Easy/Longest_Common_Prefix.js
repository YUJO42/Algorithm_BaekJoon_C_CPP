/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
  if (strs.length < 1) {
    return "";
  }
  let prefix = strs[0];
  for (let i = 1; i < strs.length; i++) {
    while (strs[i].indexOf(prefix) !== 0) {
      prefix = prefix.substring(0, prefix.length - 1);
      if (prefix === "") return "";
    }
  }

  return prefix;
};

// test code

const input1 = ["flower", "flow", "flight"];
const input2 = ["dog", "racecar", "car"];

console.log(longestCommonPrefix(input1)); // output : "fl"
console.log(longestCommonPrefix(input2)); // output : ""
