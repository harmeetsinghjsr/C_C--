// #include<stdio.h>
// #include<conio.h>
// int fact(int);
// int main()
// {
// 	int n,result;
// 	printf("Enter a no.");
// 	scanf("%d",&n);
// 	result=fact(n);
// 	printf("%d",n);
// 	getch();
// }
// int fact(int x);
// {
// 	if(x==0)
// 	return 1;
// 	else
// 	return x*fact(x-1);
// }

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,f=1,sum=0;
	printf("Enter a no.");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		f=f*i;
		sum=sum+f;
	}
	printf("factorial is %d",f);
	printf("sum of factorial is %d",sum);
	return 0;
}
