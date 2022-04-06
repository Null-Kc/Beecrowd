#include <bits/stdc++.h>

int main()
{
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1-n2 == 0){
      printf("S\n");
    }
    else if (n1-n3 == 0){
      printf("S\n");
    }
    else if (n2-n3 == 0) {
      printf("S\n");
    }
    else if ((n1+n2)-n3 == 0) {
      printf("S\n");
    }
    else if ((n2+n3)-n1 == 0) {
      printf("S\n");
    }   
    else if ((n1+n3)-n2 == 0) {
      printf("S\n");
    }
    else {
      printf("N\n");
    }
    return 0;
}