#include<stdio.h>
#include<string.h>

int main(){
    // char str1[50];
    // printf("Enter a string: ");
    // fgets(str1,sizeof(str1),stdin);

    // char str2[50];
    // printf("Enter another string: ");
    // fgets(str2,sizeof(str2),stdin);

    // strcat(str1, str2);
    // printf("%s%s", str1, str2); // Print both strings on the same line
        char string1[100];
        char string2[100];
        printf("Enter the first string: ");
        scanf("%s", string1);
        printf("Enter the second string: ");
        scanf("%s", string2);
        printf("%s%s\n", string1, string2);


    //     // Concatenate the strings
    //     char concatenated_string[200];
    //     strcpy(concatenated_string, string1);
    //     strcat(concatenated_string, string2);

    //     // Print the concatenated string
    //     printf("%s\n", concatenated_string);
        return 0;
    }
