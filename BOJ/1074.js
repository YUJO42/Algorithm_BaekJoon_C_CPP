// BOJ Input

let fs = require("fs");
let input = fs.readFileSync("dev/stdin").toString().trim().split(" ");

let N = input[0];
let r = input[1];
let c = input[2];

// solution

// N = 2^N = 사각형 한 변의 넓이
// r = 세로
// c = 가로

let result = 0;

function recursive(squareSize, vertical, horizontal) {
  if (squareSize === 0) {
    return result;
  }

  let half = squareSize / 2;
  let section = 0;
  if (vertical >= half && horizontal >= half) {
    section = 3;
  } else if (vertical >= half && horizontal < half) {
    section = 2;
  } else if (vertical < half && horizontal >= half) {
    section = 1;
  }
  result += (sum / 4) * section;
  recursive(power - 1, vertical % half, y % half);
}

function solution(N, r, c) {
  squareSize = Math.pow(2, N);
  squareSize *= squareSize;

  if (squareSize == 1) {
    return console.log(result);
  }

  console.log(recursive(squareSize - 1, r, c));
}

// test code

solution(2, 3, 1); // 11
solution(3, 7, 7); // 63
