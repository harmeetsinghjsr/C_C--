// #include <stdio.h>

// int isPrime(int num) {
//     if (num <= 1) {
//         return 0;
//     }
    
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return 0;
//         }
//     }
    
//     return 1;
// }

// int main() {
//     int count = 0;
//     int num = 2;
    
//     while (count < 100) {
//         if (isPrime(num)) {
//             printf("%d ", num);
//             count++;
//         }
//         num++;
//     }
    
//     return 0;
// }

#include <stdio.h>

int main() {
    int min, max;
    printf("Enter the minimum and maximum values: ");
    scanf("%d %d", &min, &max);

    printf("Prime numbers between %d and %d are: ", min, max);
    
    for (int num = min; num <= max; num++) {
        int isPrime = 1;
        
        if (num <= 1) {
            isPrime = 0;
        }
        
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) {
            printf("%d ", num);
        }
    }
    
    return 0;
}