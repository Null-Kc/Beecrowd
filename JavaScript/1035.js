var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var nums = lines.shift().split(" ");
var v1 = parseFloat(nums[0]);
var v2 = parseFloat(nums[1]);
var v3 = parseFloat(nums[2]);
var v4 = parseFloat(nums[3]);

if((v2 > v3) && (v4 > v1) && (v3 + v4 > v1 + v2) && v3 > 0 && (v1 % 2 == 0)) {
  console.log("Valores aceitos");
}
else {
  console.log("Valores nao aceitos");
}