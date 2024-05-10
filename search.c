// search a num in arr
#include<stdio.h>
int main(){
     int n,x;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     
    scanf("%d",&x);
    int i;
    for(i=0;i<n;i++){
    if (arr[i]==x){
        printf("yes its present");
    }
    }

    return 0;
}