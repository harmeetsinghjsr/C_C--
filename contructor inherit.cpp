#include<iostream>
using namespace std;
class A{
	public: A()
	{
		cout<<"A constructor\n";
	}
	~A()
	{
			cout<<"A disconstructor\n";
	}
};
class B:public A{
	public: B()
	{
			cout<<"B constructor\n";
	}
	~B()
	{
			cout<<"B disconstructor\n";
	}
};
int main()
{
	B ob;
	return 0;
}
