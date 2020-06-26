function solution(s) {
  if (s.length % 2 === 0) {
    return s[parseInt(s.length / 2) - 1] + s[parseInt(s.length / 2)];
  } else {
    return s[parseInt(s.length / 2)];
  }
}

// test code

console.log(solution("abcde")); // c
console.log(solution("qwer")); // we
