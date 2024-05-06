#include<stdio.h>
#include<stdlib.h>
    int is_Palindrome(int num){
        int reversed=0;
        int x = num;
        while(x!=0){
            reversed = reversed*10 + x%10;
            x = x/10;
        }
            printf("The reverse is %d\n",reversed);
            if(num==reversed){
                return 1;
            }
            else{
                return 0;
            }
    }

int main(){
    int number;
    printf("Enter the number to check :");
    scanf("%d",&number);
    if(is_Palindrome(number)){
        printf("yes");
    }
    else{
        printf("no");
    }


    return 0;
}
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n,x;
//     int rev;
//     int i,d;
//     printf("Enter the number to check :");
//     scanf("%d",&n);
//     rev=0;
//     x=n;
//     while(x!=0){
//         d=x%10;
//         rev=rev*10+d;
//         x/=10;
//     }
//     if(rev==n)
//     printf("yes");
//     else
//     printf("no");
// }