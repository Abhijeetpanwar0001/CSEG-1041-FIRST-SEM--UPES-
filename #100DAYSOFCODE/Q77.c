// Q77 Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n, i, j, k, distinct = 1;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    int diagonal[n];  // To store diagonal elements

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Extract diagonal elements
    for(i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }

    // Check if diagonal elements are distinct
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(diagonal[i] == diagonal[j]) {
                distinct = 0;
                break;
            }
        }
        if(distinct == 0) break;
    }

    if(distinct == 1)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
