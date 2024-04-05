#include <iostream>
using namespace std;

class ComplexNumber{
    
    int fr;
    void multiply(){
    }
    
};

int main(){
    
    double a,b,c,d;
    
    cin>>a>>b;
    cin>>c>>d;
    
    double r,i;
    
    r=(a*c)-(b*d);
    i=(a*d)+(c*b);
    
    cout<<r<<" + "<<i<<"i";
    
    return 0;
}
