function solution(strings, n) {
  return strings.sort((x, y) => {
    if (x[n] === y[n]) {
      return x - y;
    } else {
      return x[n] - y[n];
    }
  });
}
