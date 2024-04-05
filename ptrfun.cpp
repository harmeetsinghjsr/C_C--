#include <bits/stdc++.h>
using namespace std;
class X{
	public:
	int a;
	void fun(int b){
		cout<<b<<endl;
	}
};
int main()
{
	int X::*ptr1=&X::a;
	void(X::*ptr2)(int)=&X::fun;
	X ob;
	ob.*ptr1=10;
	cout<<ob.*ptr1;
	(ob.*ptr2)(20);
	return 0;
}
