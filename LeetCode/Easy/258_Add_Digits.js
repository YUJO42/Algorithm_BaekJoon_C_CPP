/**
 * @param {number} num
 * @return {number}
 */
function recursive(num) {
  if (num < 10) {
    return num;
  }
  let sum = 0;

  for (let i = 0; num > 0; i++) {
    sum += num % 10;
    num = parseInt(num / 10);
  }
  return recursive(sum);
}

var addDigits = function (num) {
  return recursive(num);
};

// test code
console.log(addDigits(38)); // output : 2
console.log(addDigits(11111)); // output : 5
console.log(addDigits(111111111)); // output : 9
console.log(addDigits(123456789)); // output : 9
console.log(addDigits(987654321)); // output : 9

let num = 123 / 10;
console.log(num);

let num2 = parseInt(123 / 10);
console.log(num2);
