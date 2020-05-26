/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function (nums) {
  var result = [];
  var solution = [];
  var index = 0;

  for (var i = 0; i < nums.length; i++) {
    for (var j = i + 1; j < nums.length; j++) {
      for (var k = j + 1; k < nums.length; k++) {
        if (nums[i] + nums[j] + nums[k] === 0) {
          solution = { i, j, k };
          result[index] = solution;
          index++;
        }
      }
    }
  }

  return result;
};
