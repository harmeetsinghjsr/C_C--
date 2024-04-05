#include<iostream>
using namespace std;
struct node
{
	int info;
	node* next;
	node* prev;
	
}*save,*start,*newptr,*ptr;
node *createanode(int);
void insertatbeginning(node *);
void displayll(node *);


int main()
{
	start=NULL;
	int inf;
	char ch='y';
	while(ch=='y'|| ch='Y')
	{
		cout<<"Enter the element you want t insert at new node";
		cin>>inf;
		cout<<"\nCReate a node";
		newptr=createanode(inf);
		if(newptr!=NULL)
		{
			cout<<"\nCreated a node succesfully";
		}
		else
		{
			cout<<"\nNot created.. operation aborted! ";
		}
		cout<<"\nInserting a new node";
		insertatbeginning(newptr);
		cout<<"\nNode inserted successfully..List after inserted";
	}
	
	
	
	
	
	node *createanode(int n)
	{
		
		ptr=new node;
		ptr->info=n;
		ptr->next=NULL;
		return ptr;
		
	}
	void insertatbeginning(node *np)
	{
		if(start==NULL)
		
	}
	
	void displayll(node* np)
	{
		while(np!=NULL)
		{
			cout<<np->info<<" -> ";
			np=np->next;
		}
	}
}

