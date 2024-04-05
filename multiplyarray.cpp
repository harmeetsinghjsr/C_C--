#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
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
            printf("\nEnter the value of a[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            c[i][j]=0;
            for(k=0;k<3;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%d ",c[i][j]);
        }
    }
    return 0;
}
