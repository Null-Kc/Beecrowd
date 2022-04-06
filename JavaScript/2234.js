var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var nums = lines.shift().split(" ");
var n1 = parseFloat(nums[0]);
var n2 = parseFloat(nums[1]);

var media = (n1 / n2);

console.log(media.toFixed(2));