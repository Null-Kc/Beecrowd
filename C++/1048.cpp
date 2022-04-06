#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    double salario,novosal,money,perc,val;
 
    cin>>salario;
 
    if(salario>=0 && salario<=400.00) {
        val = 0.15;
    }
    else if(salario>=400.01 && salario<=800.00) {
        val = 0.12;
    }
    else if(salario>=800.01 && salario<=1200.00) {
        val = 0.1;
    }
    else if(salario>=1200.01 && salario<=2000.00) {
        val = 0.07;
    }
    else {
        val=0.04;
    }
 
    money= salario * val;
    novosal= salario + money;
    perc= val * 100;
 
    cout << "Novo salario: " << fixed << setprecision(2) << novosal<< endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << money << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << perc << " %" << endl;
 
    return 0;
}