#include<iostream>
using namespace std;
class X{
    public:
    int a;
    void func(int b){
        cout<<b<<endl;
    }
};
int main()
{
    int X::*ptr1=&X::a;
    void(X::* ptr2)(int)=&X::func;
    X obj;
    obj.*ptr1=10;
    cout<<obj.*ptr1<<" ";
    (obj.*ptr2)(20);
    return 0;
}
