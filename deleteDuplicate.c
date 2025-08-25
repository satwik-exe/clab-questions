#include <stdio.h>
#include <stdlib.h>

void deleteDuplicates(int* arr, int* size) {
    int i, j, k;

    for (i = 0; i < *size; i++) {
        for (j = i + 1; j < *size; j++) {
            if (arr[i] == arr[j]) {
                for (k = j; k < *size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                (*size)--;
                j--; 
            }
        }
    }
}

int main() {
    int max;

    printf("Enter the number of elements: ");
    scanf("%d", &max);

    int *arr = (int *)malloc(max * sizeof(int));

    printf("Enter the elements: ");
    for (int i = 0; i < max; i++) {
        scanf("%d", &arr[i]);
    }

    deleteDuplicates(arr, &max);

    printf("Array after deleting duplicates: ");
    for (int i = 0; i < max; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
