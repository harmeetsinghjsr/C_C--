#include<iostream>
using namespace std;
int main()
{
	int a[100],size,i,index=-1,ele,pos;
	cout<<"Enter the size of array: ";
	cin>>size;
	cout<<"Enter "<<size<<" values: ";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter a number to insert ";
		cin>>ele;
	cout<<"Enter index number to insert ";
		cin>>pos;
	for (i=size;i>=pos;i--;)
	{
		a[i]=a[i-1];
	}
	a[i]=ele
	size++;
	cout<<"Array new list: ";
	
	for(i=0;i<size;i++)
	{
		cout<<a[i]" "
	}
}
