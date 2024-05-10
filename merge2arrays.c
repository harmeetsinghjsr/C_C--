#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedArr[size1 + size2];
    memcpy(mergedArr, arr1, size1 * sizeof(int));
    memcpy(mergedArr + size1, arr2, size2 * sizeof(int));

    int mergedSize = size1 + size2;
    qsort(mergedArr, mergedSize, sizeof(int), compare);

    printf("Merged Array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }

    return 0;
}
