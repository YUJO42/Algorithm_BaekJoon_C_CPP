// let str = "1234";
// console.log(typeof str);

// str *= 1;
// console.log(typeof str);

// str += "1";
// console.log(typeof str);

const arr = [1, 5, 7, 10];

arr.sort();
console.log(arr);
// > [1, 10, 5, 7]
// 아무 옵션이 없다면 각 값의 첫번째 값을 기준으로 정렬 됨

arr.sort((x, y) => x - y);
console.log(arr);
// > [1, 5, 7, 10]
// compareFunction으로 x와 y값을 비교해 작은 값이 앞에 오도록 오름차순 정렬

arr.sort((x, y) => y - x);
console.log(arr);
// > [10, 7, 5, 1]
// compareFunction으로 x와 y값을 비교해 큰 값이 앞에 오도록 내림차순 정렬

const doubleArr = [
  ["yujo", 42, "javscript"],
  ["seoh", 24, "python"],
  ["jaejeon", 25, "python"],
  ["sohpark", 14, "java"],
];

doubleArr.sort();
console.log(doubleArr);

doubleArr.sort((x, y) => x[1] - y[1]);
console.log(doubleArr);

doubleArr.sort((x, y) => x[2] - y[2]);
console.log(doubleArr);
