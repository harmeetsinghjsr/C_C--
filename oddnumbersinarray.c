#include <stdio.h>
int main()
{
    int a[5],i,c=0;
    for(i=0;i<5;i++){
        printf("The numbers in array are :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]%2!=0){
            printf("%d",a[i]);
            c++;
        }
        else{
            continue;
        }
    }
    printf("\nThe count of odd numbers are :%d",c);
    return 0;
}
