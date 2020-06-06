let nums = [1, 3, 5, 6, 2, 0, 8, 9, 7, 4];

// qucik sort
// divide and conquer 분할 정복 방식
// 1. 피벗 선택
// 2. 피벗 요소와 비교해 피벗보다 작은건 왼쪽 큰건 오른쪽
// 3. 반복

// 시간 복잡도
// 평균 : O(n log(n))
// 최선 : O(N log(N))
// 최악 : O(N^2)

function partition(arr, left, right) {
  let pivot = arr[Math.floor((right + left) / 2)];
  let i = left;
  let j = right;

  while (i <= j) {
    while (arr[i] < pivot) {
      i++;
    }
    while (arr[j] > pivot) {
      j--;
    }
    if (i <= j) {
      let temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--;
    }
  }
  return i;
}

function quickSort(arr, left, right) {
  let index;
  if (arr.length > 1) {
    index = partition(arr, left, right);
    if (left < index - 1) {
      quickSort(arr, left, index - 1);
    }
    if (index < right) {
      quickSort(arr, index, right);
    }
  }

  return arr;
}

quickSort(nums, 0, nums.length - 1);
console.log(nums);
