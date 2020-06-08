function shellSort(arr) {
  let gap = Math.floor(arr.length / 2);

  while (gap > 0) {
    for (let i = 0; i < arr.length - gap; i++) {
      let currentIndex = i;
      let gapShiftedIndex = i + gap;

      while (currentIndex >= 0) {
        if (arr[gapShiftedIndex] <= arr[currentIndex]) {
          const temp = arr[currentIndex];
          arr[currentIndex] = arr[gapShiftedIndex];
          arr[gapShiftedIndex] = temp;
        }

        gapShiftedIndex = currentIndex;
        currentIndex -= gap;
      }
    }
    gap = Math.floor(gap / 2);
  }
  return arr;
}

let nums = [1, 3, 5, 6, 2, 0, 8, 9, 7, 4];
shellSort(nums);

console.log(nums);
