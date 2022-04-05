var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
var raio = Number(lines.shift());
var A = (raio * raio * 3.14159).toFixed(4);
   
console.log(`A=${(A)}`);