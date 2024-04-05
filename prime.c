#include <stdio.h>

int main() {
    int n, sum = 0,prime,i,j;
    printf("Enter a ending integer: ");
    scanf("%d", &n);
    
    for (i = 2; i <= n; i++)
	{
	prime = 1;
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime==1) {
            sum = sum+i;
        }
    }
    
    printf("The sum of prime numbers till %d is %d.\n", n, sum);
    
    return 0;
}
