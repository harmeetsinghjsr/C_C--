#include <iostream>
using namespace std;
#define n 100
class Stack
{
	int *arr;
	int top;
	public:
		Stack()
		{
			top=-1;
			arr=new int[n];
		}
		void push(int x)
		{
			if(top==n-1)
			{
				cout<<"OVERFLOW ";
				return;
			}
			++top;
			arr[top]=x;
			
		}
		void pop()
		{
			if(top==-1)
			{
				cout<<"UNDERFLOW";
				return;
			}
			top--;
		}
		int Top()
		{
			if(top==-1)
			{
				cout<<"UNDERFLOW";
				return -1;
			}
			return arr[top];
		}
		bool empty()
		{
			return top==-1;
		}
};
int main()
{
	Stack ob;
	ob.push(1);
	ob.push(2);
	ob.push(3);
	ob.push(4);
	ob.push(5);
	ob.push(6);
	cout<<ob.Top()<<endl;
	ob.pop();
	cout<<ob.Top()<<endl;
	ob.pop();
	cout<<ob.Top()<<endl;
	ob.pop();
	ob.pop();
	cout<<ob.Top()<<endl;
	ob.pop();
	ob.pop();
}
