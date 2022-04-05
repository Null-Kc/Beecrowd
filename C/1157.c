#include <stdio.h>

main(){
    int num ,x;
    scanf("%d",&num);
        
    for (x=1; x<=num; x++){
        if (num%x==0){
            printf("%d\n",x);}
        }
    return 0;
}