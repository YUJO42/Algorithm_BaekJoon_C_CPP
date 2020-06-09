// BOJ JS input

const fs = require("fs");
const { match } = require("assert");
const input = fs
  .readFileSync("/dev/stdin")
  .toString()
  .trim()
  .split("\n")
  .map((num) => parseInt(num));

// test code
// const input = [5, 1, 3, 8, -2, 2];
// const input = [1, 4000];
// const input = [5, -1, -2, -3, -1, -2];

input.shift();
const arr = input.sort((a, b) => a - b);

let sum = 0;
for (let i = 0; i < arr.length; i++) {
  sum += arr[i];
}

const checkValueMap = new Map();
for (let i = 0; i < arr.length; i++) {
  if (checkValueMap.has(arr[i])) {
    checkValueMap.set(arr[i], checkValueMap.get(arr[i]) + 100);
  } else {
    checkValueMap.set(arr[i], 0);
  }
}

let max = 0;
let checkValueArr = [];

for (let value of checkValueMap.keys()) {
  if (max < checkValueMap.get(value)) {
    max = checkValueMap.get(value);
  }
}

for (let value of checkValueMap.keys()) {
  if (max === checkValueMap.get(value)) {
    checkValueArr.push(value);
  }
}

// 산술평균 : N개의 수들의 합을 N으로 나눈 값
const average = Math.round(sum / arr.length);

// 중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
const middle = arr[Math.floor(arr.length / 2)];

// 최빈값 : N개의 수들 중 가장 많이 나타나는 값
let mostValue = 0;
if (checkValueArr.length > 1) {
  mostValue = checkValueArr[1];
} else {
  mostValue = checkValueArr[0];
}

// 범위 : N개의 수들 중 최댓값과 최솟값의 차이
const range = arr[arr.length - 1] - arr[0];

console.log(average);
console.log(middle);
console.log(mostValue);
console.log(range);
