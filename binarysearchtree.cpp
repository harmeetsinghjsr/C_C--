#include <iostream>
using namespace std;

struct node
{
	int data;
	node *left, *right;
	node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};
node* insertBST(node *root,int val)
{
    if (root==NULL)
}
