#include <stdio.h>

main(){
int num,i=0,x,cont,div=0;
  scanf("%d", &cont);
  
  for(i=1; i<=cont; i++){
    scanf("%d",&num);
    
    for(x=1,div=0; x<=num; x++){
      
      if(num%x==0){
          div++;
      }
    }
      
      if(div==2){
          printf("%d eh primo\n", num);
      }
      
      else if(div>2){
            printf("%d nao eh primo\n", num);
      }
  }
return 0;
}