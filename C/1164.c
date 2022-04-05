#include <stdio.h>

main(){
  int num,i,soma=0,x,cont;
  scanf("%d", &cont);
  
  for(i=1; i<=cont; i++){
    scanf("%d",&num);
      
      for(x=1; x<num; x++){
        if(num%x==0){
          soma+=x;}
        }
      if(soma == num){
        printf("%d eh perfeito\n", num);
        soma=0;
      }
      else{
        printf("%d nao eh perfeito\n", num);
        soma=0;
      }
    }                                                                                                                                     
  return 0;
}