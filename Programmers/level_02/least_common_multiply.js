// function isOk(arr, max) {
//   let flag = true;
//   for (let i = 0; i < arr.length; i++) {
//     if (max % arr[i] !== 0) {
//       flag = false;
//       console.log("yes");
//     }
//     console.log("no");
//     console.log(i);
//   }
//   return flag;
// }


function solution(arr) {
  let max = Math.max(...arr);
  console.log(arr.length);
  while (1) {
    if (isOk(arr, max)) {
      return max;
    } else {
      isOk(arr, max + max);
    }
  }
}

// test code

console.log(solution([2, 6, 8, 14])); // 168
console.log(solution([1, 2, 3])); // 6
