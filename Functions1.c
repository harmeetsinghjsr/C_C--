#include <stdio.h>
int sum(int a,int b);
int main()
{
    int x=10,y=20,z;
    z= sum(x,y);
    printf("%d",z);
    return 0;
}
int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}