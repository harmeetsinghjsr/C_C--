#include <iostream>
#define n 100
using namespace std;
class Queue
{
	int *arr,front,back;
	public:
		Queue()
		{
			arr=new int[n];
			front=back=-1;
			
		}
		void push(int x)
		{
			if(back==n-1)
			{
				cout<<"OVERFLOW";
				return;
			}
			back++;
			arr[back]=x;
			
			if(front==-1)
			front++;
		}
		void pop()
		{
			if(front==-1)
			{
				cout<<"UNDERFLOW";
				return;
			}
			front++	;
		}
		int peek()
		{
			if(front==-1 || back < front)
			{
				cout<<"UNDERFLOW";
				return -1;
				
			}
			return arr[front];
		}
		bool empty()
		{
			if (front==-1||front > back)
			return true;
			return false;
		}
};
int main()
{
	Queue ob;
	ob.push(1);
	ob.push(2);
	ob.push(3);
	ob.push(4);
	ob.push(5);
	ob.push(6);
	cout<<ob.peek()<<endl;
	ob.pop();
	cout<<ob.peek()<<endl;
	ob.pop();
	cout<<ob.peek()<<endl;
	ob.pop();
	ob.pop();
	cout<<ob.peek()<<endl;
	ob.pop();
	ob.pop();
}
