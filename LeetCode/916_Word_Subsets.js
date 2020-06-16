/**
 * @param {string[]} A
 * @param {string[]} B
 * @return {string[]}
 */

// 전체 B를하나로 만드는걸 만든다
// 각 B의 알파멧의 최댓값이 밸류가 되는

var wordSubsets = function (word, key) {};

// test code

const A = ["amazon", "apple", "facebook", "google", "leetcode"];
const B1 = ["e", "o"];
const B2 = ["l", "e"];
const B3 = ["e", "oo"];
const B4 = ["lo", "eo"];
const B5 = ["ec", "oc", "ceo"];
console.log(wordSubsets(A, B1)); // o[ 'facebook', 'google', 'leetcode' ]
console.log(wordSubsets(A, B2));
console.log(wordSubsets(A, B3));
console.log(wordSubsets(A, B4));
console.log(wordSubsets(A, B5));
