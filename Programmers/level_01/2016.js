function solution(a, b) {
  return new Date(2016, a - 1, b).toString().slice(0, 3).toUpperCase();
}

// test code

console.log(solution(5, 24));
