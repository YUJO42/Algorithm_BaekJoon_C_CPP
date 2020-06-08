function solution(citations) {
  var answer = 0;
  citations.sort((x, y) => x - y);
  answer = citations[parseInt(citations.length / 2)];
  return answer;
}

// test code

citations = [3, 0, 6, 1, 5]; // return 3;

console.log(solution(citations));
