#include <stdio.h>
#include <stdlib.h>

int main(){
 
 int num, i;
 
 scanf("%d", &num);
 
 for(i=1;i<=num*4;i+=4){
  printf("%d ", i);
  printf("%d ", i+1);
  printf("%d ",i+2);
  printf("PUM\n");
 }
}