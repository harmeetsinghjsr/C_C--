#include<stdio.h>
int main()
{ int n;
print("Enter a value: ");
scanf("%d",&n);
FILE *fp;
fp=fopen("abc.txt","w");
if(fp==NULL)
{
	printf("file not created");
	exit(0);
}fprint(fp,"%d",n);
fclose(fp);
return 0;
}
