/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */

// solution 1
var multiply = function (num1, num2) {
  // Result can have at most this number of digits:
  var result = Array(num1.length + num2.length).fill(0);
  for (var j = num2.length - 1; j >= 0; j--) {
    // k is the index in the result: where to add to
    var k = num1.length + j;
    var overflow = 0;
    for (var i = num1.length - 1; i >= 0; i--) {
      product = num2[j] * num1[i] + overflow + result[k];
      result[k] = product % 10;
      overflow = (product - result[k]) / 10;
      k--;
    }
    result[k] += overflow;
  }
  // Convert result to string, removing any prepadded zeroes
  return result.join("").replace(/^0+(.)/, "$1");
};

// solution 2
function multiply(num1, num2) {
  let result = new Array(num1.length + num2.length).fill(0);

  for (let i = num1.length - 1; i >= 0; i--) {
    let index = num2.length + i;
    let carry = 0;
    for (let j = num2.length - 1; j >= 0; j--) {
      let value = num1[i] * num2[j] + carry + result[index];
      result[index] = value % 10;
      carry = (value - result[index]) / 10;
      index--;
    }
    result[index] += carry;
  }
  if (result[0] === 0) {
    while (result[0] === 0 && result.length !== 1) {
      result.shift();
    }
  }
  return result.join("").toString();
}

// test code

console.log(multiply("2", "3")); // output : 6
console.log(multiply("123", "456")); // output : 56088

// Javascript는 숫자를 64빝츠 부동 소수점을 사용하기 때문에
// 16자리를 넘어가는 숫자에 대해서는 제대로 표한하지 못한다. 따라서 숫자를 String으로 바꿔야 한다.
console.log(multiply("123456789", "987654321")); //output : "121932631112635269"
console.log(multiply("9134", "0")); //output : "0"
