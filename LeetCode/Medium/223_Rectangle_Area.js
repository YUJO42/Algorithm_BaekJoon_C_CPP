/**
 * @param {number} A
 * @param {number} B
 * @param {number} C
 * @param {number} D
 * @param {number} E
 * @param {number} F
 * @param {number} G
 * @param {number} H
 * @return {number}
 */

// A, B == 1 bottom-left
// C, D == 1 top-right
// E, F == 2 bottom-left
// G, H == 2 top-right

//@@@@@@@@@@@@ Success 1.
// var computeArea = function (A, B, C, D, E, F, G, H) {
//   //
//   var total = (C - A) * (D - B) + (G - E) * (H - F);

//   if (A > G || C < E || D < F || B > H) {
//     return total;
//   }
//   var top = Math.min(C, G);
//   var bottom = Math.max(A, E);
//   var left = Math.max(B, F);
//   var right = Math.min(D, H);

//   return total - (right - left) * (top - bottom);
// };

var computeArea = function (A, B, C, D, E, F, G, H) {
  //
  var total = (C - A) * (D - B) + (G - E) * (H - F);

  if (A > G || C < E || D < F || B > H) {
    return total;
  }
  var top = C - G < 0 ? C : G;
  var bottom = A - E > 0 ? A : E;
  var left = B - F > 0 ? B : F;
  var right = D - H < 0 ? D : H;
  return total - (right - left) * (top - bottom);
};

// Test Code

console.log(computeArea(-3, 0, 3, 4, 0, -1, 9, 2)); // output : 45
console.log(computeArea(0, 0, 0, 0, 0, 0, 0, 0)); // output : 0
console.log(computeArea(-2, -2, 2, 2, 3, 3, 4, 4)); // output : 17
