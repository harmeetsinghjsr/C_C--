#include<iostream>
using namespace std;
class A
{
	public: 
	int l,b,a;
	void area(int l,int b)
	{
		a=l*b;
		cout<<a;
	}
};
int main()
{
	A ob;
	ob.area(2,3);
}
