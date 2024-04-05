#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Money{
    public:
    int rupee, paisa;
};
int main(){
    Money m1, m2; 
    double a,b,c;
    cin>>m1.rupee>>m1.paisa; 
    cin>>m2.rupee>>m2.paisa; 
    a=m1.rupee+m2. rupee; 
    b=m1.paisa+m2.paisa;
    c=a+(b/100);
    cout<<fixed<<setprecision(2)<<c;
    return 0;
}