var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var nums = lines.shift().split(" ");
var n1 = parseFloat(nums[0]);
var n2 = parseFloat(nums[1]);

if (n1 == 0){
  console.log("C")
}

else if (n1 == 1 & n2 == 0){
  console.log("B")
}
  
else{
  console.log("A")
}
