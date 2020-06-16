// BOJ input

let fs = require("fs");
let input = fs.readFileSync("dev/stdin").toString().split("\n");

const text = input[0].toString();
const word = input[1].toString();
KMP(text, word);

// test code 1

// const text = "ABC ABCDAB  ABCDABCDABDE";
// const word = "ABCDABD";
// KMP(text, word);

// test code 2

// const text = "ABC ABCDAB ABCDABCDABDE";
// const word = "ABC";
// KMP(text, word);

// test code 3
// const text = "";
// const word = "ABC";
// KMP(text, word);

/*
 * @param 문자열(공백 포함) {string} ABC ABCDAB ABCDABCDABDE
 * @param 찾는 단어 {string} ABCDABD
 * @return 등장 횟수 {number}
 * @return 등장 위치 {numbers}
 */

function buildPatternTable(word) {
  const patternTable = [0];
  let prefixIndex = 0;
  let suffixIndex = 1;

  while (suffixIndex < word.length) {
    if (word[prefixIndex] === word[suffixIndex]) {
      patternTable[suffixIndex] = prefixIndex + 1;
      suffixIndex++;
      prefixIndex++;
    } else if (prefixIndex === 0) {
      patternTable[suffixIndex] = 0;
      suffixIndex++;
    } else {
      prefixIndex = patternTable[prefixIndex - 1];
    }
  }

  return patternTable;
}

function KMP(text, word) {
  let count = 0;
  let result = [];
  if (word.length === 0) {
    return 0;
  }

  let textIndex = 0;
  let wordIndex = 0;

  const patternTable = buildPatternTable(word);

  while (textIndex < text.length) {
    if (text[textIndex] === word[wordIndex]) {
      if (wordIndex === word.length - 1) {
        count++;
        result.push(textIndex - word.length + 1);
      }
      wordIndex++;
      textIndex++;
    } else if (wordIndex > 0) {
      wordIndex = patternTable[wordIndex - 1];
    } else {
      wordIndex = 0;
      textIndex++;
    }
  }
  console.log(count);
  console.log(...result);
}
