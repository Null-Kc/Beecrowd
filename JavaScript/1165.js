var input = require('fs').readFileSync('dev/stdin', 'utf8');
var lines = input.split('\n');

var cont = parseInt(lines.shift()); 

for (var i = 0; i < cont ; i++) {
  var num = parseInt(lines.shift()); 
  var div = 0;
  var x=1;

  while (x <= num) {
    if (num % x == 0){
      div = div + 1
    }
    x = x + 1
  }

  if (div > 2){
    console.log(num + " nao eh primo")
  }
  else {
    console.log(num + " eh primo")
  }
}