#include<stdio.h>
int main()
{
	int a=10,*p;
	p=&a;
	*p=20;
	printf("%d",*p);
	printf("%p",&a);
	printf("%p",p);
	
}
