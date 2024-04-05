#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		void getdata()
		{
			cout<<"Enter value: ";
			cin>>x;
		}
		void showdata()
		{
			cout<<"\nEntered value is:  "<<x<<endl;
		}
};


int main()
{
	A *ptr;
	//ptr=&ob;
	ptr=new A;
	ptr->getdata();
	ptr->showdata();
}