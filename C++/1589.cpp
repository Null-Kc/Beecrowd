#include <iostream>
  
using namespace std;

int main(int argc, const char * argv[])
{
    int i, raio1, raio2; 

    cin >> i;
    
    for(; i > 0; i--){
        cin >> raio1 >> raio2;
        cout << raio1+raio2 << endl;
    }
        
    return 0;
}