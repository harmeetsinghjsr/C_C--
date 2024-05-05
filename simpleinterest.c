#include <stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter Principal amount:");
    scanf("%f",&p);
    printf("Enter Rate amount:");
    scanf("%f",&r);
    printf("Enter Time amount:");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("The Interest is: %f",si);
    return 0;
}
