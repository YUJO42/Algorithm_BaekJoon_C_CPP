function solution(arr, divisor) {
  let answer = [];

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] % divisor === 0) {
      answer.push(arr[i]);
    }
  }

  return answer.length > 0 ? answer : [-1];
}

// test code

console.log(solution([5, 9, 7, 10], 5)); // [5, 10]
console.log(solution([1, 2, 3, 36], 1)); // [1, 2, 3, 36]
console.log(solution([3, 2, 6], 10)); // [-1]
