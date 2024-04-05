#include <stdio.h>
float si(float p,float r, float t);
int main()
{
    float a,b,c,z;
    printf("Enter principle value: ");
    scanf("%f",&a);
    printf("Enter rate of interest: ");
    scanf("%f",&b);
    printf("Enter time in yrs: ");
    scanf("%f",&c);
    z=si(a,b,c);
    printf("Simple Interest: %.3f",z);
    return 0;
}
float si(float p,float r,float t){
    float s;
    s=(p*r*t)/100;
    return s;
}
