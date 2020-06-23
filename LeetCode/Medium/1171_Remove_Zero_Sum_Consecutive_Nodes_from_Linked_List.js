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

var removeZeroSumSublists = function (head) {
  let newList = new ListNode(0);
  newList.next = head;
  let current = newList;
  while (current !== null) {
    let sum = 0;
    while (head !== null) {
      sum += head.val;
      if (sum === 0) {
        current.next = head.next;
      }
      head = head.next;
    }
    current = current.next;
    if (current !== null) {
      head = current.next;
    }
  }

  return newList.next;
};

// [1, 2, 3, -2, -3] = 0

newList(0) {
    val = 0;
    next = head;
}

newList(1) {
    val = 1;
    next = head.next;
}

current(0) {
    val = 0;
    next = head;
}

current(1) {
    val = 1;
    next = head.next;
}