function solution(record) {
  const answer = [];
  const newArr = [];
  const userMap = new Map();

  for (let i = 0; i < record.length; i++) {
    let temp = record[i];
    newArr[i] = temp.split("");
  }
  console.log(newArr);
}

// test code

console.log(
  solution(
    [[
      "Enter uid1234 Muzi",
      "Enter uid4567 Prodo",
      "Leave uid1234",
      "Enter uid1234 Prodo",
      "Change uid4567 Ryan",
    ]],
  ),
);
