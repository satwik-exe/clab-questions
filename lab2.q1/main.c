#include <stdio.h>
#include <stdlib.h>
void insert(int arr[], int *n, int element, int pos)
{
    if (pos > *n + 1 || pos < 1) {
        printf("invalid position!\n");
    }
    else
    {
        for (int i = *n; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = element;
        (*n)++;
        printf("element inserted\n");
    }
}
void delete(int arr[], int *n, int pos)
{
    if (pos > *n || pos < 1)
    {
        printf("invalid position!\n");
    } else
    {
        for (int i = pos - 1; i < *n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        (*n)--;
        printf("element deleted\n");
    }
}
void linsearch(int arr[], int n, int element)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Element not found\n");
    }
}
void traverse(int arr[], int n)
{
    printf("Array Elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter size n: ");
    scanf("%d", &n);
    int arr[100]; // Assuming maximum size of array to be 100
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int choice, element, pos;
    while (1) {
        printf("**MENU**\n");
        printf("1. insert\n");
        printf("2. delete\n");
        printf("3. linear search\n");
        printf("4. traverse\n");
        printf("5. exit\n");
        printf("enter option: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("element to insert: ");
                scanf("%d", &element);
                printf("enter position: ");
                scanf("%d", &pos);
                insert(arr, &n, element, pos);
                break;
            case 2:
                printf("enter pos to delete: ");
                scanf("%d", &pos);
                delete(arr, &n, pos);
                break;
            case 3:
                printf("element to search: ");
                scanf("%d", &element);
                linsearch(arr, n, element);
                break;
            case 4:
                traverse(arr, n);
                break;
            case 5:
                exit(0);
            default:
                printf("invalid option\n");
        }
    }
    return 0;
}