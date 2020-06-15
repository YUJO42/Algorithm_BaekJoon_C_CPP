function boyerMoore(text, word) {
  let textCursor;
  let wordCursor;
  let textLen = text.length;
  let wordLen = word.length;

  // 건너뛰기 표 만들기
  let skip = new Map();
  for (let i of text) {
    skip.set(i, wordLen);
  }
  for (textCursor = 0; textCursor < wordLen; textCursor++) {
    if (skip.has(word[textCursor])) {
      skip.set(word[textCursor], wordLen - textCursor - 1);
    }
  }
  // 검색
  while (textCursor < textLen) {
    wordCursor = wordLen - 1;
    while (text[textCursor] == word[wordCursor]) {
      if (wordCursor == 0) {
        return textCursor;
      }
      wordCursor--;
      textCursor--;
    }
    textCursor += Math.max(skip.get(text[textCursor]), wordLen - wordCursor);
  }
  return -1;
}

// test code

console.log(boyerMoore("asdfasdfasfasdfasdfasdfadsfaeeee", "aeeee"));
console.log(boyerMoore("asdfasdfasfasdfasdfasdfadsfaeeee", "aeeeee"));
console.log(boyerMoore("asdfasdfasfasdfasdfasdfadsfaeeee", "asdf"));
