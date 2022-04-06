var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var nums = lines.shift().split(" ");
var n1 = parseInt(nums[0]);
var n2 = parseInt(nums[1]);
var n3 = parseInt(nums[2]);

if ((n1-n2 == 0) || (n1-n3 == 0) || (n2-n3 == 0)) {
  console.log("S");
}
else {
  if ((n1+n2-n3 == 0) || (n2-n1+n3 == 0) || (n3-n1+n2 == 0)) {
    console.log("S");
  }
  else if ((n1-n2-n3 == 0) || (n2-n1-n3 == 0) || (n3-n1-n2 == 0)) {
    console.log("S");
  }
  else {
    console.log("N");
  }
}

