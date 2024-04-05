#include<iostream>
using namespace std;

struct node{
int data;
node *next;
}*first=NULL;


void create_link_list(int a[],int n){


node *t,*last;

first=new struct node();
first->data=a[0];
first->next=NULL;
last=first;


for(int i=1;i<n;i++){
t=new struct node();
t->data=a[i];
t->next=NULL;
last->next=t;
last=t;
}
}

void sorting(struct node *p){

node *q;

while(p!=NULL){
q=p->next;

while(q!=NULL){
if(p->data>q->data){
int temp=p->data;
p->data=q->data;
q->data=temp;
}
q=q->next;
}
p=p->next;
};
}

void display(struct node *p){

while(p!=NULL){
cout<<p->data<<" ";
p=p->next;
}
}


int main(){


int n;

cout<<"How many nodes do you want:\n";
cin>>n;

int a[n];

cout<<"Enter your node elements:\n";

for(int i=0;i<n;i++){

cin>>a[i];
}

create_link_list(a,n);

cout<<"Linked list before sorting"<<"\n";
display(first);
sorting(first);
cout<<"Linked list after sorting"<<"\n";
display(first);

}
