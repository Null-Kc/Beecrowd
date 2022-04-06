#include <iostream>

using namespace std;

int main() {
    float num;
    
    cin >> num;
    
    if(num < 0.0000)
         cout << "Fora de intervalo\n";

    else if(num >= 0.0000 && num <= 25.0000)
         cout << "Intervalo [0,25]\n";

    else if(num > 25.0000 && num <=50.0000)
         cout << "Intervalo (25,50]\n";

    else if(num > 50.0000 && num <=75.0000)
         cout << "Intervalo (50,75]\n";

    else if(num > 75.0000 && num <=100.0000)
         cout << "Intervalo (75,100]\n";

    else if(num > 100.0000)
         cout << "Fora de intervalo\n";
         
    return 0;
}