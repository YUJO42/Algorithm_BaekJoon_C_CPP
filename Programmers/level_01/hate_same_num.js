function solution(arr) {
  const answer = [];
  let index = 0;
  for (let i = 0; i < arr.length; i++) {
    answer.push(arr[i]);
    while (arr[i] === answer[index]) {
      i++;
    }
    i--;
    index++;
  }

  return answer;
}

// test code

console.log(solution([1, 1, 3, 3, 0, 1, 1]));
console.log(solution([4, 4, 4, 3, 3]));
