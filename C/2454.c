#include <stdio.h>

int main() {
    int n1, n2;
    
    scanf("%i %i", &n1, &n2);

    if(n1 == 0)
        printf("C\n");
    else {
      if(n2 ==0 )
         printf("B\n");
      else
         printf("A\n");
    }
    return 0;
}