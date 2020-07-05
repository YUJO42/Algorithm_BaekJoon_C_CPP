/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */

/**
 * @param {TreeNode} root
 * @param {number} k
 * @return {number}
 */

var kthSmallest = function (root, k) {
  function callDFS(node) {
    if (!node) return false;

    let leftVal = callDFS(node.left);
    if (leftVal) return leftVal;
    k--;
    if (!k) return node.val;
    return callDFS(node.right);
  }
  return callDFS(root);
};
