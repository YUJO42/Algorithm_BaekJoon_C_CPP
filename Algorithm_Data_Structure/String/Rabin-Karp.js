// simply

function rabinKarp(text, word) {
  const textHash = [];
  const wordHash = [];

  for (let i = 0; i < text.length; i++) {
    if (i === 0) {
      for (let j = 0; j < word.length; j++) {
        textHash.push(text[j]);
        wordHash.push(word[j]);
      }
    } else {
      textHash.shift();
      textHash.push(text[i + word.length - 1]);
    }

    if (textHash.join("") === wordHash.join("")) {
      return i;
    }
  }

  return -1;
}

// 원래 버전

function rabinKarp(text, word) {
  let textHash = 0;
  let wordHash = 0;
  const prime = 3;

  for (let i = 0; i < text.length; i++) {
    if (i == 0) {
      for (let j = 0; j < word.length; j++) {
        textHash += text.charCodeAt(j) * prime;
        wordHash += word.charCodeAt(j) * prime;
      }
    } else {
      textHash -= text.charCodeAt(i) * prime;
      textHash += text.charCodeAt(i + word.length - 1) * prime;
    }
    if (textHash === wordHash) {
      let find = true;
      for (let j = i; j < word.length; j++) {
        if (text[j] !== word[j]) {
          find = false;
          break;
        }
      }
      if (find) {
        return i;
      }
    }
  }

  return -1;
}

// test code

console.log(rabinKarp("asdfasdfasfasdfasdfasdfadsfaeeee", "aeeee"));
console.log(rabinKarp("asdfasdfasfasdfasdfasdfadsfaeeee", "aeeeee"));
console.log(rabinKarp("asdfasdfasfasdfasdfasdfadsfaeeee", "asdf"));
