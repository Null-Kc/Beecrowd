#include<stdio.h>

int main()
{
    float salario;

    scanf("%f",&salario);

    if(salario > 0 && salario <= 400.0)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",(salario + (salario * .15)), (salario * .15));
    else if(salario <= 800.0)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",(salario + (salario * .12)), (salario * .12));
    else if(salario <= 1200.0)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",(salario + (salario * .10)), (salario * .10));
    else if(salario <= 2000.0)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",(salario + (salario * .07)), (salario * .07));
    else
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",(salario + (salario * .04)), (salario * .04));
    return 0;
}