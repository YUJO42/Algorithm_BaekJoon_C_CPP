/**
 * @param {number[][]} matrix
 * @return {number}
 */
const maxEqualRowsAfterFlips = (matrix) => {
  let hist = {};
  let max = 0;

  for (let row of matrix) {
    let one = (two = "");
    for (let col = 0; col < row.length; col++) {
      let val = row[col];

      one += val === 0 ? "c" : "s";
      two += val === 0 ? "s" : "c";
    }

    hist[one] = (hist[one] || 0) + 1;
    hist[two] = (hist[two] || 0) + 1;
    max = Math.max(max, hist[one], hist[two]);
  }
  return max;
};

// test code

console.log(
  maxEqualRowsAfterFlips([
    [0, 1],
    [1, 1],
  ])
); // output : 1

console.log(
  maxEqualRowsAfterFlips([
    [0, 1],
    [1, 0],
  ])
); // output : 2

console.log(
  maxEqualRowsAfterFlips([
    [0, 0, 0],
    [0, 0, 1],
    [1, 1, 0],
  ])
); // output : 2
