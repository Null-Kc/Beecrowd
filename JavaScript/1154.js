var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
var x = 100
var soma = 0
var i = 0

while (x >= 0){
    var x = parseFloat(lines.shift());
    
    if (x >= 0) {
    	i = i + 1
        soma = soma + x
    }
    
media = (soma / i).toFixed(2)

}
console.log(media)