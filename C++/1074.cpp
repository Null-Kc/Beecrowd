#include <iostream>

using namespace std;

int main(){
    int teste, num;
    
    cin >> teste;
    for(int i = 0; i < teste; i++){
            cin >> num;
            if(num == 0){
                 cout << "NULL\n";
            }
            else{
            if(num%2 == 0) cout << "EVEN";
            else cout << "ODD";
            
            if(num<0) cout << " NEGATIVE\n";
            else cout << " POSITIVE\n";
            }
    }
    
    return 0;
}