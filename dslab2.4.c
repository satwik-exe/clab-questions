#include <stdio.h>

void convSparse(int rows, int cols, int nonZeroCount, int tuple[][3]) {
    int sparseMatrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sparseMatrix[i][j] = 0;
        }
    }

    for (int k = 1; k <= nonZeroCount; k++) {
        int row = tuple[k][0];
        int col = tuple[k][1];
        int value = tuple[k][2];
        sparseMatrix[row][col] = value;
    }

    printf("Sparse Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", sparseMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols,Count;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    printf("Enter number of non-zero elements: ");
    scanf("%d", &Count);

    int tuple[Count + 1][3]; 

    printf("Enter the 3-tuple representation:\n");
    for (int k = 1; k <= Count; k++) {
        scanf("%d %d %d", &tuple[k][0], &tuple[k][1], &tuple[k][2]);
    }

    
    convSparse(rows, cols,Count, tuple);

    return 0;
}
