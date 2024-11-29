#include <stdio.h>
#include <stdlib.h>

int main() {
    int row, col;

    // Take input for rows and columns
    printf("Enter the value of row: ");
    scanf("%d", &row);
    printf("Enter the value of col: ");
    scanf("%d", &col);

    // Check if the matrix is square
    if (row != col) {
        printf("Trace is only defined for square matrices.\n");
        return 1;
    }

    // Allocate memory for the 2D array
    int **arr = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++) {
        arr[i] = (int *)malloc(col * sizeof(int));
    }

    // Read matrix elements
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter the %d element: ", i * col + j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Compute the trace
    int trace = 0;
    for (int i = 0; i < row; i++) {
        trace += arr[i][i];
    }

    // Print the trace
    printf("The trace is %d\n", trace);

    // Free allocated memory
    for (int i = 0; i < row; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
