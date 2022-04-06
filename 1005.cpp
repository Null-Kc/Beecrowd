#include<bits/stdc++.h>
using namespace std;

int main() {
    double n1,n2,media;
    cin>>n1>>n2;
    n1=n1*3.5;
    n2=n2*7.5;
    media= (n1+n2)/(3.5+7.5);
    cout<<fixed;
    cout<<setprecision(5)<<"MEDIA = "<<media<<endl;
    return 0;
} 