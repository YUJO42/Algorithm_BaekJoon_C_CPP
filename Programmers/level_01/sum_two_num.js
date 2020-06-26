function solution(a, b) {
  let sum = 0;
  if (a === b) {
    return a;
  }

  let max = a < b ? b : a;
  let min = a > b ? b : a;

  while (min <= max) {
    sum += min;
    min++;
  }
  return sum;
}

// test code

console.log(solution(3, 5)); // 12
console.log(solution(3, 3)); // 3
console.log(solution(5, 3)); // 12
