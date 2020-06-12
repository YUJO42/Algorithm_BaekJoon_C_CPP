// BOJ Input

// let fs = require("fs");
// let input = fs.readFileSync("dev/stdin").toString().trim().split(" ");

// test code

// const input = [2, 3, 1]; // outp ut : 11
// const input = [3, 7, 7]; // output : 63

// // solution 1
// let n = input[0];
// let R = input[1];
// let C = input[2];

// let result = 0;
// const dy = [0, 0, 1, 1];
// const dx = [0, 1, 0, 1];

// go(1 << n, 0, 0);

// function go(n, r, c) {
//   if (n === 2) {
//     for (let i = 0; i < 4; i++) {
//       let ny = r + dy[i];
//       let nx = c + dx[i];
//       if (ny === R && nx === C) {
//         console.log(result);
//         return;
//       }
//       result++;
//     }
//     return;
//   }
//   go(n / 2, r, c);
//   go(n / 2, r, c + n / 2);
//   go(n / 2, r + n / 2, c);
//   go(n / 2, r + n / 2, c + n / 2);
//   return;
// }

// solution 2

let side = inout[0];
let y = input[1]; // 세로
let x = inputp[2]; // 가로

function solution(side, x, y) {
  side /= 2;
  if (side === 1) {
    return 1;
  }
  if (side === 2) {
    return; // 2 * 2인 사각형에서의 인덱스
  }
}

console.log(solution(Math.pow(2, side), x, y));
