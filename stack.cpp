#include<iostream>
using namespace std;
int size=50;
int push(int[], int &, int)
void display(int [], int);

int main()
{
    int top=-1,item,res;
    int stack[size];
    char ch='y';
    while(ch='y'||)
    {
        cout<<"enter  the elements you want to insert in a stack";
        cin>>item;
        res=push(stack,top,item);
        if(res==-1)
        {
            cout<<"\nAborting operation";
            
        }
        cout<<"\nThe stack after inserting element is\n";
        display(stack,top);
        cout<<"Want to enter more elements?? press y : ";
        cin>>ch;
    }
}
int push(int stack[], int &, int item)
{
    if(top==size-1)
    {
        return -1;
        
    }
    else
    {
        top++;
        stack[top]=item;
        
    }
    return 0;
}
void display(int stack[], int top)
{
    cout<<satck[top]<<"<----"<<endl;
    for(int i=top;i>=0;i--)
    
}
}
