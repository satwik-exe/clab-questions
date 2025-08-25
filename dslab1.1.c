#include <stdio.h>

void compareNum(int *n1, int *n2) {
    if (*n1 > *n2) {
        printf("%d is greater than %d\n", *n1, *n2);
    } else if (*n1 < *n2) {
        printf("%d is less than %d\n", *n1, *n2);
    } else {
        printf("%d is equal to %d\n", *n1, *n2);
    }
}

int main() {
    int a,b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    compareNum(&a, &b);

    return 0;
}