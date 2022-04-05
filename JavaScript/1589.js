var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var num = parseInt(lines.shift()); 

  for (var i = 0; i < num ; i++) {
    var raios = lines.shift().split(" ");
    var raio1 = parseInt(raios[0]);
    var raio2 = parseInt(raios[1]);
    console.log(raio1 + raio2)
  }