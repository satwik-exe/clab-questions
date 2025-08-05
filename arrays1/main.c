#include <stdio.h>

void printArray(int arr[], int size) {
    for(int i = 9; i!=-1; i--) {
        printf("%d ", arr[i]);

    }

}

int main() {
    int myArray[10] = {1, 2, 3, 4, 5,6,7,8,9,10};
    printArray(myArray, 10);
    return 0;
}