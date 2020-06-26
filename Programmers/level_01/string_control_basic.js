function solution(s) {
  if (s.length === 4 || s.length === 6) {
    for (let i = 0; i < s.length; i++) {
      if (0 <= s[i] && s[i] <= 9) {
      } else {
        return false;
      }
    }
    return true;
  }
  return false;
}

// test code

console.log(solution("a234"));
console.log(solution("1234"));
