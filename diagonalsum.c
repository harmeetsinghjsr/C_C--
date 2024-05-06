// #include <stdio.h>
// int main()
// {
//     int a[3][3],i,j,sum1=0,sum2=0;
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("\nEnter the value of a[%d][%d]: ",i,j);
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             if(i==j){
//                 sum1+=a[i][j];
//             }
//             if(i+j==2){
//                 sum2+=a[i][j];
//             }
//         }
        
//     }
//     printf("\nSum of diagonal elements is: %d\n",sum1);
//     printf("\nSum of diagonal elements is: %d",sum2);
//     return 0;
// }

#include<stdio.h>
int main(){
    int n,sum1,sum2;
    sum1=sum2=0;
    scanf("%d",&n);
    int arr[n][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }

    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j)
            sum1 =sum1 + arr[i][j];
            if(i+j==n-1)
            sum2 =sum2 + arr[i][j];
        }
    }
    printf("sum of left diagonal element is %d\n",sum1);
    printf("sum of right diagonal element is %d\n",sum2);

    return 0;
}