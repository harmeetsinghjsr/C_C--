#include<iostream>
using namespace std;
struct node
{
int info;
node* next;
}save,*start,*newptr,*ptr;
node *create_a_node(int);
void insert_at_beginning(node *);
void display_ll(node *);
int main()
{
start=NULL;
int inf;
char ch='y';
while(ch=='y'|| ch=='Y')
{
cout<<"Enter the element you want to insert at new node";
cin>>inf;
cout<<"\nCreating a node";
newptr=create_a_node(inf);
if(newptr!=NULL)
{
cout<<"\nCreated a node successfully";
}
else
{
cout<<"\nNot created..operation aborted";
}
cout<<"\nInserting a new node";
insert_at_beginning(newptr);
cout<<"\nNode inserted successfully..List after insertion\n";
display_ll(start);
cout<<"\nWant to add more nodes? press y";
cin>>ch;
}

}
node *create_a_node(int n)
{
ptr=new node;
ptr->info=n;
ptr->next=NULL;
return ptr;
}
void insert_at_beginning(node *np)
{
if(start==NULL)
{
start=np;
}
else
{
save=start;
start=np;
np->next=save;
}
}
void display_ll(node np)
{
while(np!=NULL)
{
cout<<np->info<<" -> ";
np=np->next;
}
}
