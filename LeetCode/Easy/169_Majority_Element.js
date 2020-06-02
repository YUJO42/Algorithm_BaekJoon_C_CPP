/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {
  nums.sort();
  return nums[parseInt(nums.length / 2)];
};

// test code
var nums1 = [3, 2, 3];
var nums2 = [2, 2, 1, 1, 1, 2, 2];

console.log(majorityElement(nums1)); // output : 3
console.log(majorityElement(nums2)); // output : 2
