function searchWord(text, word) {
  let textIndex = 0;
  let wordIndex = 0;
  while (text[textIndex] !== undefined) {
    if (text[textIndex] === word[wordIndex]) {
      let currentIndex = textIndex;
      while (text[textIndex] === word[wordIndex]) {
        if (wordIndex === word.length - 1) {
          return currentIndex;
        }
        textIndex++;
        wordIndex++;
      }
    }
    wordIndex = 0;

    textIndex++;
  }

  return -1;
}

// test code

console.log(searchWord("asdfasdfasfasdfasdfasdfadsfaeeee", "aeeee"));
console.log(searchWord("asdfasdfasfasdfasdfasdfadsfaeeee", "aeeeee"));
