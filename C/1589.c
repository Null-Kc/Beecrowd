#include <stdio.h>

main(){
    int i=0,num,raio1,raio2;
    
    scanf("%d",&num);
    
    for (i=0; i<num ; i++){
        scanf("%d",&raio1);
        scanf("%d",&raio2);
        printf("%d\n",(raio1+raio2));
    }

    return 0;
}