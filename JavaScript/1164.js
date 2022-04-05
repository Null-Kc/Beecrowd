var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var cont = parseInt(lines.shift()); 

for (var i = 0; i < cont; i++) {
  var soma = 0;
  var num = parseInt(lines.shift());
  for (var j = 1; j < num; j++) {
    if (num % j == 0) soma += j;
  }
  if (soma == num) {
    console.log(num + " eh perfeito");
  }
  else {
    console.log(num + " nao eh perfeito");
  }
}