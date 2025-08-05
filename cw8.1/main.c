#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* array;    // Pointer to the array of integers
    int last;      // Index of the last element in the array
    int capacity;  // Total allocated memory for the array
} DynamicIntArray;

void initArray(DynamicIntArray* dArray, int initialCapacity) {
    dArray->array = (int*)malloc(initialCapacity * sizeof(int));
    dArray->last = -1; // Indicates that the array is empty
    dArray->capacity = initialCapacity;
}

void resizeArray(DynamicIntArray* dArray, int newCapacity) {
    if (newCapacity > dArray->capacity) {
        int* newArray = (int*)realloc(dArray->array, newCapacity * sizeof(int));
        if (newArray) {
            dArray->array = newArray;
            dArray->capacity = newCapacity;
        }
    }
}

void addElement(DynamicIntArray* dArray, int element, int index) {
    if (index < 0 || index > dArray->last + 1) {
        printf("Invalid index\n");
        return;
    }

    if (dArray->last + 1 >= dArray->capacity / 2) {
        resizeArray(dArray, dArray->capacity * 2);
    }

    dArray->array[index] = element;
    dArray->last++;

    if (dArray->last + 1 >= dArray->capacity / 2) {
        resizeArray(dArray, dArray->capacity * 2);
    }
}

void removeElement(DynamicIntArray* dArray, int index) {
    if (index < 0 || index > dArray->last) {
        printf("Invalid index\n");
        return;
    }

    for (int i = index; i < dArray->last; i++) {
        dArray->array[i] = dArray->array[i + 1];
    }

    dArray->last--;

    if (dArray->last + 1 < dArray->capacity / 4) {
        resizeArray(dArray, dArray->capacity / 2);
    }
}

void printArray(const DynamicIntArray* dArray) {
    for (int i = 0; i <= dArray->last; i++) {
        printf("%d ", dArray->array[i]);
    }
    printf("\n");
}

void freeArray(DynamicIntArray* dArray) {
    free(dArray->array);
    dArray->array = NULL;
    dArray->last = -1;
    dArray->capacity = 0;
}

int main() {
    DynamicIntArray dArray;
    initArray(&dArray, 4);

    addElement(&dArray, 1, 0);
    addElement(&dArray, 2, 1);
    addElement(&dArray, 3, 2);
    printArray(&dArray);

    addElement(&dArray, 4, 1);
    printArray(&dArray);

    removeElement(&dArray, 1);
    printArray(&dArray);

    freeArray(&dArray);
    return 0;
}
