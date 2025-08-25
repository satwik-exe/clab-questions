#include <stdio.h>
void nonzero(int mat[][100], int n) 
{
    int c = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (mat[i][j] != 0) 
            {
                c++;
            }
        }
    }
    printf("nonzero elements: %d\n", c);
}
void uppertri(int mat[][100], int n) 
{
    printf("upper triangular matrix:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i <= j) 
            {
                printf("%d ", mat[i][j]);
            } else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
void diagonal(int mat[][100], int n) 
{
    printf("elements above and below the main diagonal:\n");
    for (int i = 0; i < n; i++) 
    {
        if (i > 0) {
            printf("%d ", mat[i][i-1]);
        }
        if (i < n - 1) {
            printf("%d ", mat[i][i+1]);
        }
        printf("\n");
    }
}
int main() 
{
    int n;
    printf("enter size of square matrix: ");
    scanf("%d", &n);
    int mat[100][100]; 
    printf("enter elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    nonzero(mat, n);
    uppertri(mat, n);
    diagonal(mat, n);
    return 0;
}

