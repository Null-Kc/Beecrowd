var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var salario = parseFloat(lines.shift()); 

if(salario <= 2000.00){
  console.log("Isento")
}

else if (salario >= 2000.01 && salario <= 3000.00) {
  console.log("R$ " + ((salario - 2000.00)*0.08).toFixed(2));
}

else if (salario >= 3000.01 && salario <= 4500.00) {
  console.log("R$ " + ((salario - 3000.00)*0.18 + 1000.00*0.08).toFixed(2));
}

else if (salario >= 4500.01) {
  console.log("R$ " + ((salario - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08).toFixed(2));
}