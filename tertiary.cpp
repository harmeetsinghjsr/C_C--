#include<stdio.h>
int main(){
    int a,b,max;
    printf("Enter first no.: ");
    scanf("%d",&a);
    printf("Enter second no.: ");
    scanf("%d",&b);
    max=(a>b)?a:b;
    printf('%d',max);
    return 0;
}
