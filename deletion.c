#include<stdio.h>
int main(){
    int position;
    printf("position to delete:");
    scanf("%d",&position);

    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=position;i<n-1;i++){
        arr[i]= arr[i+1];
    }

    for(int i=0; i<n-1; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
