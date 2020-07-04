function solution(s, n) {
  // 32 === " "
  const arr = [];
  for (let i = 0; i < s.length; i++) {
    arr.push(s.charCodeAt(i));
  }

  for (let i = 0; i < s.length; i++) {
    if (97 <= arr[i] && arr[i] <= 122) {
      arr[i] += n;
      if (arr[i] > 122) {
        arr[i] -= 26;
      }
    } else if (65 <= arr[i] && arr[i] <= 90) {
      arr[i] += n;
      if (arr[i] > 90) {
        arr[i] -= 26;
      }
    }
  }

  for (let i = 0; i < arr.length; i++) {
    arr[i] = String.fromCharCode(arr[i]);
  }

  return arr.join("");
}
