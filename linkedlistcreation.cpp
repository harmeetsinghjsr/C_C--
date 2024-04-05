#include <iostream>
using namespace std;
class Node{
	public:
		int info;
		Node* next;
	
};
void printlist(Node* n)
{
	while(n!=NULL)
	{
		cout<<n->info<<endl;
		n=n->next;
		
	}
};
	int main()
	{
		Node* first= new Node();
		Node* second =new Node();
		Node* third=new Node();
		
		first->info=1;
		first->next=NULL;
		
		second->info=2;
		second->next=first;
		
		third->info=3;
		third->next=second;
		
		printlist(first);
		
	}
