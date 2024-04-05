#include<iostream>
using namespace std;
class Opr
{
	private:float n1,n2;
	public:void get()
	{
		cout<<"Enter 2 nos. of float datatype: ";
		cin>>n1>>n2;
	}
	void add()
	{
		cout<<"Sum: "<<n1+n2;
	}
	void multiply()
	{
		float m=n1*n2;
		cout<<"Product: "<<m;
	}
};
int main(){
	Opr ob;
	ob.get();
	ob.add();
	ob.multiply();
	return 0;
}


