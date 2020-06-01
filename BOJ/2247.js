// const fs = require("fs");
// const input = fs.readFileSync("/dev/stdin").toString().split(" ");

// var N = input[0];

var stars = function (N) {
  for (var i = 0; i < N; i++) {
    process.stdout.write("*" + "\n");
  }
};

stars(27);
