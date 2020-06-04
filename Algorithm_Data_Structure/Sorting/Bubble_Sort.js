// # 버블 정렬(거품 정렬)
// 인접한 두 원소를 검사하여 정렬하는 알고리즘
// 정렬할 목록 전체를 반복하며 해당 인덱스의 값이 인접한 값과 스왑이 가능한 경우 스왑한다.
// 더 이상 스왑이 필요하지 않을 때까지 반복된다.

// # 시간복잡도
// 최선의 경우 : O(N^2)
// 최악의 경우 : O(N^2)
// 평균  : O(N^2)

// ## 장점
// 구현이 매우 간단하다.

// ## 단점
// 최선, 최악의 경우 시간복잡도가 모두 O(N^2)이므로 매우 비효율적이다.

let nums = [1, 3, 5, 6, 2, 0, 8, 9, 7, 4];

console.log(nums);

function bubbleSort(arr) {
  for (let i = 0; i < arr.length - 1; i++) {
    for (let j = 0; j < arr.length - i; j++) {
      if (arr[j + 1] < arr[j]) {
        let temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        console.log(arr);
      }
    }
  }
}

bubbleSort(nums);

console.log(nums);
