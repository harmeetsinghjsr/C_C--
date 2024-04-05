#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,m,i,*ptr;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	*ptr=10;
	*(ptr+1)=20;
	ptr[2]=30;
	ptr[3]=40;
	ptr[4]=50;
	printf("Enter additional no. ");
	scanf("%d",&m);
	ptr=(int *)realloc(ptr,(n+m)*sizeof(int));
	*(ptr+5)=60;
	ptr[6]=70;
	for(i=0;i<m+n;i++)
	printf("%d\n",*(ptr+i));
	return 0;
}
