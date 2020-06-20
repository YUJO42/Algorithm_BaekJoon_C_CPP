/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */

var addTwoNumbers = function (l1, l2) {
  let x = l1;
  let y = l2;

  let answer = new ListNode(0);
  let result = answer;

  let carry = 0;
  while (x || y) {
    xVal = x ? x.val : 0;
    yVal = y ? y.val : 0;

    let sum = xVal + yVal + carry;
    carry = sum < 10 ? 0 : 1;
    sum = sum < 10 ? sum : sum - 10;

    x = x.next;
    y = y.next;
    answer.next = new ListNode(sum);
    answer = answer.next;
  }

  return result.next;
};
