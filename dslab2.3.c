#include <stdio.h>

int main() {
    int rows, cols, i, j, k = 0;
    
    printf("Enter size of the sparse matrix: ");
    scanf("%d %d", &rows, &cols);
    
    int sparseMatrix[rows][cols];
    
    printf("Enter elements of sparse matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &sparseMatrix[i][j]);
        }
    }
    
    int nonZeroCount = 0;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(sparseMatrix[i][j] != 0) {
                nonZeroCount++;
            }
        }
    }
    
    int tuple[nonZeroCount + 1][3];
    tuple[0][0] = rows;
    tuple[0][1] = cols;
    tuple[0][2] = nonZeroCount;
    
    k = 1;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(sparseMatrix[i][j] != 0) {
                tuple[k][0] = i;
                tuple[k][1] = j;
                tuple[k][2] = sparseMatrix[i][j];
                k++;
            }
        }
    }
    
    printf("Sparse matrix in 3-tuple format\n");
    for(i = 0; i <= nonZeroCount; i++) {
        printf("%d\t%d\t%d\n", tuple[i][0], tuple[i][1], tuple[i][2]);
    }
    
    return 0;
}