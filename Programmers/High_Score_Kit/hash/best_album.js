// 각 장르당 플레이 순서대로
// 장르 안에서 플레이 순서대로
// 같은 장르가 3번 이상 나오면 조금 나온거 하나 버리기

function solution(genres, plays) {
  const arr = [];
  const playMap = new Map();

  for (let i = 0; i < genres.length; i++) {
    arr[i] = [genres[i], plays[i], i];

    // playMap에 장르별 총 재생횟수를 담음
    if (playMap.has(genres[i])) {
      playMap.set(genres[i], playMap.get(genres[i]) + plays[i]);
    } else {
      playMap.set(genres[i], plays[i]);
    }
  }

  const sortedPlayMap = [...playMap].sort((x, y) => y[1] - x[1]);
  const sortedArr = arr.sort((x, y) => {
    if (playMap.get(y[0]) === playMap.get(x[0])) {
      return y[1] > x[1] ? 1 : -1;
    } else {
      return playMap.get(y[0]) > playMap.get(x[0]) ? 1 : -1;
    }
  });

  const answer = [];

  console.log(sortedPlayMap);
  console.log(sortedArr);

  return answer;
}

// test code

// const genres1 = ["classic", "pop", "classic", "classic", "pop"];
// const plays1 = [500, 600, 150, 800, 2500];

const genres2 = ["classic", "pop", "classic", "hiphop", "pop"];
const plays2 = [500, 600, 150, 800, 2500];

// console.log(solution(genres1, plays1));
console.log(solution(genres2, plays2));
