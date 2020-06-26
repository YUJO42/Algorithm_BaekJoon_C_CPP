function solution(s) {
  let countP = 0;
  let countY = 0;

  for (let i = 0; i < s.length; i++) {
    if (s[i] === "y" || s[i] === "Y") {
      countY++;
    }
    if (s[i] === "p" || s[i] === "P") {
      countP++;
    }
  }

  return countP === countY ? true : false;
}

// test code

console.log(solution("pPoooyY")); // true
console.log(solution("PyY")); // false
