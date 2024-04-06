#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p,n,i;
    printf("Enter the number of elements in array: "); 
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        *(p+i)=i;
    } 
    for(i=0;i<n;i++){
        printf("%d",*p);
    }
    return 0;
 }
