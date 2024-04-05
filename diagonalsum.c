#include <stdio.h>
int main()
{
    int a[3][3],i,j,sum1=0,sum2=0;
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("\nEnter the value of a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            if(i==j){
                sum1+=a[i][j];
            }
            if(i+j==2){
                sum2+=a[i][j];
            }
        }
        
    }
    printf("\nSum of diagonal elements is: %d\n",sum1);
    printf("\nSum of diagonal elements is: %d",sum2);
    return 0;
}
