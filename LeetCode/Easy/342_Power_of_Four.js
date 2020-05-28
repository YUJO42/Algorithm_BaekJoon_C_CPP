/**
 * @param {number} num
 * @return {boolean}
 */
var isPowerOfFour = function (num) {
  if (num <= 0) return false;
  if (num == 1) return true;
  if (num % 2 == 1) return false;

  while (num >= 4) {
    if (num % 4 != 0) return false;
    num = parseInt(num / 4);
  }

  return num == 1;
};
