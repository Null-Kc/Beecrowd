var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var teste = parseInt(lines.shift()); 

for (var i = 0; i < teste ; i++) {
  var num = parseInt(lines.shift());
    
  if(num<0){
    if(num%2==0){
      console.log("EVEN NEGATIVE")
    }
    else{
      console.log("ODD NEGATIVE")  
    }    
  }
  else if(num>0){
    if(num % 2 == 0){
      console.log("EVEN POSITIVE")
    }
    else{
      console.log("ODD POSITIVE")
    }
  }
  else if(num==0){
    console.log("NULL")
  }
}   