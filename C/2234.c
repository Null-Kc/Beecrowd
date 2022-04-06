#include <stdio.h>
 
int main() { 
  float n1, n2, media;

  scanf("%f %f", &n1, &n2);
	media = n1 / n2;
  
  printf("%.2f\n", media);

  return 0;
}