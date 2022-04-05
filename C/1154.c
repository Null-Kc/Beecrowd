#include <stdio.h>
int main()
{
    int x,soma=0;
    double media,i=0;
    
    while(1)
    {
        scanf("%d", &x);
        if(x<0)
            break;
        else
        {
            soma+=x;
            i++;
        }
    }
    
    media=soma/i;

    printf("%.2lf\n",media);
    return 0;
}