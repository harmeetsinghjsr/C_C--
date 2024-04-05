#include<iostream>
using namespace std;
int main()
{
	int a[100],size=0,i,index=-1,ele;
	cout<<"Enter the size of array: ";
	cin>>size;
	cout<<"Enter "<<size<<" values: ";
	for(i=0;i<size;i++)
	{
	
		cin>>a[i];
	}
	cout<<"Enter a number to search ";
	cin>>ele;
	for(i=0;i<size;i++)
	{
		if (a[i]==ele)
		{
			index=i;
			cout<<"Element is present in "<<index;
			break;
			
		}
		
	}
	if (index==-1)
		cout<<"NOT PRESENT";
}
