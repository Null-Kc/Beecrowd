var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
var n1 = parseFloat(lines.shift());
var n2 = parseFloat(lines.shift());

media = (n1 * 3.5 + n2 * 7.5) / 11.0;

console.log('MEDIA = ' + media.toFixed(5));