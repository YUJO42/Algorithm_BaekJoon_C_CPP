/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function (nums) {
  var arr = [];
  var index = 0;

  for (var i = 0; i < nums.length; i++) {
    if (nums[i] !== 0) {
      arr[index] = nums[i];
      index++;
    }
  }

  while (index < nums.length) {
    arr[index] = 0;
    index++;
  }

  for (var i = 0; i < nums.length; i++) {
    nums[i] = arr[i];
  }
};
