#include <stdio.h>

int main() {
    int arr[5];
    printf("Enter your numbers: ");
    for (int i = 0; i < 5; ++i) {
        scanf(" %d", &arr[i]);
    }
    int largest = arr[0];
    int smallest = arr[0];
    for (int i=1;i<5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("The largest is: %d\n",largest);
    printf("The smallest is: %d\n", smallest);

}
