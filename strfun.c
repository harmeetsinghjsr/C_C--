#include <stdio.h>
#include <string.h>
int main()
{
char a[]="hello";
char b[]="hi";
int x,y,z;
x=strlen(a);
printf("%d\n",x);
printf("%s\n",strupr(a));
printf("%s\n",strlwr(a));
printf("%s\n",strrev(a));
return 0;
}
