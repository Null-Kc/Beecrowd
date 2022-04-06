#include<bits/stdc++.h>
using namespace std;

int main(){
    int v1,v2,v3,v4;

    cin>>v1>>v2>>v3>>v4;

    if((v2>v3)&&(v4>v1)&&(v3+v4>v1+v2)&&v3>0&&v4>0&&(v1%2==0)){
        cout<<"Valores aceitos"<<endl;
    }else{
        cout<<"Valores nao aceitos"<<endl;
    }
  return 0;
}