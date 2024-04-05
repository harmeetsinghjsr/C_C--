#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,r1,r2,D;
    printf("Enter a b c:");
    scanf("%f%f%f",&a,&b,&c);
    D=b*b-4*a*c;
    if (D>0){
        r1=(-b+sqrt(D))/2*a;
        r2=(-b-sqrt(D))/2*a;
        printf("Values of root 1= %.2f  and root2= %.2f  are:",r1,r2);
    }
    else if (D==0)
    {
        r1 = r2 = -b / (2 * a);
        printf("\n Value of root1 = %.2f and Value of root2 = %.2f", r1, r2); 

    }
    else{
        
    }
}
