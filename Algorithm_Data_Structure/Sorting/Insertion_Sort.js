let nums = [1, 3, 5, 6, 2, 0, 8, 9, 7, 4];

// 내림차순 정렬
// function insertionSort(arr) {
//   for (let i = 0; i < arr.length; i++) {
//     index = i;
//     while (arr[index - 1] !== undefined && arr[index] > arr[index - 1]) {
//       let temp = arr[index - 1];
//       arr[index - 1] = arr[index];
//       arr[index] = temp;
//       index--;
//     }
//   }
// }

// 오름차순 정렬

function insertionSort(arr) {
  for (let i = 0; i < arr.length; i++) {
    index = i;
    while (arr[index] !== undefined && arr[index - 1] > arr[index]) {
      let temp = arr[index - 1];
      arr[index - 1] = arr[index];
      arr[index] = temp;
      index--;
    }
  }
}

insertionSort(nums);
console.log(nums);
