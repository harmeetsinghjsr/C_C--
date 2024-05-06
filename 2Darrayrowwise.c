#include<stdio.h>
#include<stdlib.h>
int main(){
    //2d array input
    int row,col;
    // printf("Enter the number of rows and columns :");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    int i,j;
    //input
    for(i=0;i<=row-1;i++){
        for(j=0;j<=col-1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //manipulation
    for(i=0;i<=row-1;i++){
        int sum=0;
        for(j=0;j<=col-1;j++){
            sum+=arr[i][j];
        }
            printf("Day %d Expense : %d\n",i+1,sum);
    }
}