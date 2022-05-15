#include <stdio.h>

int main()
{
    unsigned long long int num;
    while(scanf("%llu", &num))
    {
        if(num == -1ll) break;
        if(num == 0ll) printf("0\n");
        else printf("%llu\n", num - 1ll);
    }
    return 0;
}