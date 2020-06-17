/**
 * @param {string[]} A
 * @param {string[]} B
 * @return {string[]}
 */

var wordSubsets = function (word, key) {
  //   const arr = Array(26).fill(0);
  const wordMap = new Map();
  const keyMap = new Map();
  const keyMapSave = new Map();
  const answer = [];

  for (let i = 0; i < key.length; i++) {
    keyMapSave.clear();

    for (let j = 0; j < key[i].length; j++) {
      if (keyMap.has(key[i][j]) && keyMapSave.has(key[i][j])) {
        keyMapSave.set(key[i][j], keyMapSave.get(key[i][j]) + 1);
        if (keyMap.get(key[i][j]) < keyMapSave.get(key[i][j])) {
          keyMap.set(key[i][j], keyMapSave.get(key[i][j]));
        }
      } else if (keyMap.has(key[i][j])) {
        keyMapSave.set(key[i][j], 1);
      } else {
        keyMap.set(key[i][j], 1);
        keyMapSave.set(key[i][j], 1);
      }
    }
  }

  for (let i = 0; i < word.length; i++) {
    wordMap.clear();
    for (let j = 0; j < word[i].length; j++) {
      if (wordMap.has(word[i][j])) {
        wordMap.set(word[i][j], wordMap.get(word[i][j]) + 1);
      } else {
        wordMap.set(word[i][j], 1);
      }
    }

    let findFlag = 1;
    for (let key of keyMap.keys()) {
      if (
        keyMap.get(key) > wordMap.get(key) ||
        wordMap.get(key) === undefined
      ) {
        findFlag = 0;
        break;
      }
    }
    if (findFlag === 1) {
      answer.push(word[i]);
    }
  }

  return answer;
};

// test code

const A = ["amazon", "apple", "facebook", "google", "leetcode"];
const A1 = ["acaac", "cccbb", "aacbb", "caacc", "bcbbb"];
const B1 = ["e", "o"];
const B2 = ["l", "e"];
const B3 = ["e", "oo"];
const B4 = ["lo", "eo"];
const B5 = ["ec", "oc", "ceo"];
const B6 = ["c", "cc", "b"];

console.log(wordSubsets(A, B1)); // output : [ 'facebook', 'google', 'leetcode' ]
console.log(wordSubsets(A, B2)); // output : [ 'apple', 'google', 'leetcode' ]
console.log(wordSubsets(A, B3)); // output : [ 'facebook', 'google']
console.log(wordSubsets(A, B4)); // output : [ 'google', 'leetcode' ]
console.log(wordSubsets(A, B5)); // output : [ 'facebook', 'leetcode']
console.log(wordSubsets(A1, B6)); //output : ['cccbb']
