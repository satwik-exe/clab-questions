#include <stdio.h>

void reverse(int a[], int size);

int main() {
    int arr[10];
    printf("Enter your values: ");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &arr[i]);

    }
    reverse(arr, 10);
    for (int i = 0; i < 10; ++i) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

void reverse(int a[], int size) {
    int temp;
    for (int i = 0; i < (size / 2); ++i) {
        temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }
}

