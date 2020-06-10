function linearSearch(array, seekElement) {
  let result = -1;
  for (let i = 0; i < array.length; i++) {
    if (array[i] === seekElement) {
      return i;
    }
  }
  return -1;
}

const nums = [10, 40, 50, 30, 60, 70, 80, 90, 20];

console.log(linearSearch(nums, 60));
