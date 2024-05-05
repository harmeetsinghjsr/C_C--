// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     int length, i, j;
//     char temp;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     // Remove the newline character from the input
//     str[strcspn(str, "\n")] = '\0';

//     length = strlen(str);

//     for (i = 0; i < length - 1; i++) {
//         for (j = i + 1; j < length; j++) {
//             if (str[i] > str[j]) {
//                 temp = str[i];
//                 str[i] = str[j];
//                 str[j] = temp;
//             }
//         }
//     }

//     printf("Sorted string: %s\n", str);

//     return 0;
// }
#include<stdio.h>
#include<string.h>

int main(){
    char str[255];
    fgets(str, sizeof(str), stdin);
    
    int length =strlen(str);
    for (int i=0;i<(length-1);i++){str[strcspn(str, "\n")] = '\0';
        for(int j=0;j<((length-1)-i-1);j++){
                if (str[j]>str[j+1]){
                        char temp = str[j];
                        str[j]=str[j+1];
                        str[j+1]=temp;
                }
        }
    }
    printf("sorted string: ");
    puts(str);
        return 0;
}