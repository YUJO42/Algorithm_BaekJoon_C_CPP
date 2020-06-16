// n = 전체 학생
// lost = 잃어버린 학생
// reserve = 여분 가져온 학생
function solution(n, lost, reserve) {
  var answer = n - lost.length;

  for (let i = 0; i < reserve.length; i++) {
    if (answer === n) {
      break;
    }

    if (
      lost.indexOf(reserve[i] + 1) >= 0 ||
      lost.indexOf(reserve[i] - 1) >= 0 ||
      lost.indexOf(reserve[i]) >= 0
    ) {
      if (lost[ssssss]) answer++;
    }
  }

  return answer;
}

// test code
console.log(solution(3, [3], [1])); // output : 2
console.log(solution(5, [2, 4], [3])); // output : 4
console.log(solution(5, [4, 5], [3, 4])); // output : 4
console.log(solution(5, [2, 4], [1, 3, 5])); // output : 5
console.log(solution(5, [1, 2, 3, 4, 5], [1, 2, 3, 4, 5])); // output : 5
