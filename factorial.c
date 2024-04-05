#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int n,result;
	printf("Enter a no.");
	scanf("%d",&n);
	result=fact(n);
	printf("%d",n);
	getch();
}
int fact(int x);
{
	if(x==0)
	return 1;
	else
	return x*fact(x-1);
}
