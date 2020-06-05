/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var insertionSortList = function (head) {
  if (head === null) return head;

  let node = new ListNode(0);
  let pre = node;
  let curr = head;

  while (curr) {
    let next = curr.next;
    pre = node;
    while (pre.next && pre.next.val <= curr.val) {
      pre = pre.next;
    }
    curr.next = pre.next;
    pre.next = curr;
    curr = next;
  }
  return node.next;
};
