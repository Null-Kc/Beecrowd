var input = require('fs').readFileSync('dev/stdin', 'utf8');
var lines = input.split('\n');

var salario = parseFloat(lines.shift()); 

if (salario >= 0 && salario <= 400.00) {
  val = 0.15;
}
else if (salario >= 400.01 && salario <= 800.00) {
  val = 0.12;
}
else if (salario >= 800.01 && salario <= 1200.00) {
  val = 0.1;
}
else if (salario >= 1200.01 && salario <= 2000.00) {
  val = 0.07;
}
else {
  val = 0.04;
}

reaj = salario * val;
novosal = salario + reaj;
perc = val * 100;
perc = parseInt(perc)

console.log("Novo salario: " + novosal.toFixed(2));
console.log("Reajuste ganho: " + reaj.toFixed(2));
console.log("Em percentual: " + perc + " %")