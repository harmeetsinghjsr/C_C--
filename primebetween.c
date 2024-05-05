#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    if (a<=1){
        // remove unnecessary return statement
    }
    else{
        for (int i=a;i<=b;i++){
            c=0;
            for(int j=2;j<=i;j++){
                if(i%j==0){
                    c++;
                }
            }
            if(c==1){
                printf("%d ",i);
            }
        }
    }
    return 0;
}