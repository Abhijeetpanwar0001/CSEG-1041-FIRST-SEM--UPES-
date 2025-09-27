//Q71 Read and print a matrix.
#include <stdio.h>

int main() {
    int matrix[10][10]; // Assuming maximum 10x10 matrix
    int rows, cols, i, j;

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("The matrix is:\n");
    for (i = 1; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
