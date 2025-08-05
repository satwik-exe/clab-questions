#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array:");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);

    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("Element %d:", i + 1);
        scanf("%d", &array[i]);
    }

    int num;
    printf("Enter Number for sequential search:");
    scanf("%d", &num);

    for (int i = 0; i < size; i++) {
        if (num == array[i])
        {
            printf("%d is found in position %d\n", num, i + 1);
            break;
        }
        if(i == size - 1)
        {
            printf("NOT AVAILABLE\n");
        }
    }
    return 0;
}