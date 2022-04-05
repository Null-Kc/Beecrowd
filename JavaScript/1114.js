var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
var senha = 1

while (senha != 2002){
    var senha = parseInt(lines.shift());
    
    if (senha != 2002) {
    		console.log("Senha Invalida");
    }
	else{
	    console.log ("Acesso Permitido");
	} 
}