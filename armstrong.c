#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int num,temp1,temp2,d,c=0,sum=0;
    scanf("%d",&num);
    temp1=num;
    temp2=num;
    while(temp1!=0){
        d=temp1%10;
        c++;
        temp1/=10;
    }
    printf("%d\n",c);
    while(temp2!=0){
        int digit = temp2 % 10;
        printf("%d\n",digit);
        int power= pow(digit, c);
        printf("%d\n",power);
        sum = sum + power;
        printf("%d\n",sum);
        temp2/=10;
    }
    if(sum==num)
        printf("Armstrong number");
    else
        printf("Not an armstrong number");
    return 0;
}