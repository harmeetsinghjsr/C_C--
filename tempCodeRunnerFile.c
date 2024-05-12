// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// int main(){
//     int num,temp1,temp2,d,c=0,sum=0;
//     scanf("%d",&num);
//     temp1=num;
//     if(num == 0){
//         c = 1;
//     }
//     else{
//         while(temp1!=0){
//             d=temp1%10;
//             if(d==0){
//                 c++;
//             }
//             else
//             break;
//         }
//     }
//     printf("Trailing zeros: %d\n",c);
// }
#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Handle the special case of 0
    if (num == 0) {
        count = 1;
    } else {
        // Efficiently count trailing zeros using a loop and division
        while (num % 10 == 0) {
            count++;
            num /= 10;  // Remove the factor of 5 using division
        }
    }

    printf("The number of trailing zeros in %d is %d\n", num, count);

    return 0;
}
