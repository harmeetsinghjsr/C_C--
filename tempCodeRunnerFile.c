
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }

    }
    for(i=0;i<n;i++){
        int sum=0;
        for(j=0;j<(i=j);j++){
            sum =sum + arr[i][j];
        }
        printf("sum of diagonal element is %d",sum);
    }

    return 0;
}