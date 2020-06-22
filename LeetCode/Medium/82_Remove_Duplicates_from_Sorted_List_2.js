/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteDuplicates = function (head) {
  if (!head) {
    return head;
  }

  let newList = new ListNode(0);
  newList.next = head;
  let previous = newList;

  while (previous.next) {
    let current = previous.next;

    while (current.next && current.val === current.next.val) {
      current = current.next;
    }

    if (current !== previous.next) {
      previous.next = current.next;
    } else {
      previous = previous.next;
    }
  }
  return newList.next;
};
