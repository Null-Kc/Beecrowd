#include <stdio.h>

int main() {
 int v1, v2, v3, v4;
 scanf("%d %d %d %d", &v1, &v2, &v3, &v4);

 if((v2 > v3) && (v4 > v1) && (v3 + v4 > v1 + v2) && v3 > 0 && (v1 % 2 == 0))
  printf("Valores aceitos\n");
 else
  printf("Valores nao aceitos\n");
 return 0;
}