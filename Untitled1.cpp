#include<iostream>
#include<math.h>
using namespace std;
int main(){
int rem , d= 0, c=0 ,n;
cin >> n;
while(n!=0){
    rem = n%10;
    d= d+rem*pow(2,c);
    c++;
}
    cout << c;
}
