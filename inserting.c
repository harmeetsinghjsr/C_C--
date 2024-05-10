#include<stdio.h>
int main(){
    int num,position;
    printf("number to insert");
    scanf("%d",&num);
    printf("position whre:");
    scanf("%d",&position);

    int n;
    scanf("%d",&n);

    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=n-1;i>=position;i--){
        arr[i+1]= arr[i];
    }

    arr[position]=num;
    for(int i=0; i<n+1; i++){
        printf("%d",arr[i]);
    }

    return 0;
}
