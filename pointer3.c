#include <stdio.h>
int main()
{
    int n,*p,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    p=&n;
    for(i=1;i<11;i++){
        printf("%d x %d = %d\n",n,i,i*(*p));
    }
    return 0;
}

