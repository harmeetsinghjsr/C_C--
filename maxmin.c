#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three value:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b && a>=c)
    {
        printf("Maximum number is %d",a);
    }
    else if (b>=c && b>=a)
    {
        printf("Maximum number is %d",b);
    }
    else if (c>=a && c>=b)
    {
        printf("Maximum number is %d",c);
    }
    return 0;
}
