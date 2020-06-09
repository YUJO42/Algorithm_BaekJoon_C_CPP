const arr = [1, 1, 2, 2, 3, 4, 5];

const testMap = new Map();

for (let i = 0; i < arr.length; i++) {
  if (testMap.has(arr[i])) {
    // console.log(`if문 실행됨 현재 i = ${i}`);
    // console.log(testMap.get(arr[i]));
    // console.log(`typeof i : ${typeof i}`);
    // console.log(`typeof 1 : ${typeof 1}`);
    // console.log(`typeof arr[i] : ${typeof arr[i]}`);
    // console.log(`typeof arr[1] : ${typeof arr[1]}`);
    testMap.set(arr[i], testMap.get(arr[i]) + 100);
    // testMap.set(arr[1], testMap.get(arr[1]) + 100);
  }
  testMap.set(arr[i], 0);
}
console.log(testMap);
const i = 1;
testMap.set(arr[i], testMap.get(arr[i]) + 100);

// for (let i = 0; i < testMap.size; i++) {
//   console.log(i + "번째 반복");
//   console.log(testMap);
//   testMap.set(arr[i], testMap.get(arr[i]) - i);
// }

// testMap.set(1, 2);
console.log(testMap);
