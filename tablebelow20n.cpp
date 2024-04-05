#include <iostream>
using namespace std;
class A
{
	int x ;
	public : void get()
	{
		cin>>x;	
	}
	void show();
	
};
void A :: show()
{
	int i,p;
	{
		if (x<20)
		{
			for(i=1;i<=10;i++)
			{
			
			p=x*i;
			cout<<p<<endl;
			}
		}
		else
		{
		cout<<"not possible";
		}
	}
};
	int main(){
	
	A ob;
	ob.get();
	ob.show();

}
