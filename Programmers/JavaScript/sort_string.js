function solution(s) {
  const arr = s.split("").sort().reverse().join("");
  return arr;
}

console.log(solution("Zbcdefg"));
