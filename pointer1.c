#include <stdio.h>
int main()
{
    int a=10,*p,**q,***r;
    p=&a;
    q=&p;
    r=&q;
    printf("%p\n",*p);
    printf("%d\n",**q);
    printf("%p\n",***r);
    return 0;
}
