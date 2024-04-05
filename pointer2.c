#include <stdio.h>
int main()
{
    int a,b,*p,*q;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    // a=a+b;
    // b=a-b;
    // a=a-b;
    printf("After swapping a=%d and b=%d",a,b);
    printf("After swapping a=%d and b=%d",*p,*q);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int a=10,*p;
//     p=&a;
//     *p=20;
//     printf("%p",p);
//     printf("%p",*p);
//     return 0;
// }
