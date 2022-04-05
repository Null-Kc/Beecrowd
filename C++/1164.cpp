#include <iostream>

int main(){
    int cont, num;
    int soma;

    std::cin >> cont;
    for(int i = 0; i < cont; i++){
      std::cin >> num;
      soma = 0;
      for(int i = 1; i < num; i++){
        if(num%i == 0){
          soma += i;
          
        if(soma > num)
          break;
        }                            
      }
      if(soma == num) 
        std::cout << num << " eh perfeito\n";

      else 
        std::cout << num << " nao eh perfeito\n";
    }
  return 0;
}