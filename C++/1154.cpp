#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
    double Soma = 0, X = 1, i = 0;

    while(X > 0){

        cin >> X;
        
        if(X > 0){
            Soma = Soma + X;
            i++;
        }
    }

    cout << fixed << setprecision(2);
    cout << (Soma/i) << endl;

return 0;
}