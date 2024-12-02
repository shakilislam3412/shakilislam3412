#include <stdio.h>

int main() {
    int matrix[2][2], i, j;

    printf("Enter the elements of the 2 x 2 matrix\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Input matrix\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Odd elements\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (matrix[i][j] % 2 != 0) {
                printf("%d\n", matrix[i][j]);
            }
        }
    }

    return 0;
}
