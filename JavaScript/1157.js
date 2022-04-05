var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var num = parseInt(lines.shift()); 

for (var i = 0; i <= num ; i++) {
  if(num%i == 0){
    console.log(i)
  }
}