#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int cont, i, num, x, div;

    cin >> cont;

    for (i = 0; i < cont; i++){
        x = 1;
        cin >> num;
        
        for (div = 2; div <= (int) sqrt(num); div++) {
            if (num % div == 0) x++;
        }
        cout << num;
        
        if (!(x == 1 && num != 1))
            cout << " nao";
        cout << " eh primo" << endl;
    }
    return 0;
}