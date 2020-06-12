/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */

function swap(nums, i, j) {
  let temp = nums[i];
  nums[i] = nums[j];
  nums[j] = temp;
}

var sortColors = function (nums) {
  var zero = 0;
  var two = nums.length - 1;
  for (var one = 0; one <= two; one++) {
    while (nums[one] === 2 && one < two) {
      swap(nums, one, two);
      two--;
    }
    while (nums[one] === 0 && one > zero) {
      swap(nums, one, zero);
      zero++;
    }
  }
};

// test code

let nums = [2, 0, 2, 1, 1, 0];
sortColors(nums);
console.log(nums);
