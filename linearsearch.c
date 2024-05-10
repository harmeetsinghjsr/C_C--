#include<stdio.h>
int main(){

int num,x;
printf("number to search");
scanf("%d",&num);
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

int c=0;
for(int i=0;i<n;i++){
    if(arr[i]==num)
    c++;
}
printf("no occured %d",c);


    return 0;
}