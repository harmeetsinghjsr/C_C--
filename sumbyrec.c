#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
	int n,result;
	printf("Enter a no.");
	scanf("%d",&n);
	result=fact(n);
	printf("%d",n);
	getch();
}
int sum(int x);
{
	if(x==0)
	return 0;
	else
	return x+sum(x-1);
}
