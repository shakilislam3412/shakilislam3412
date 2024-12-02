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





#include <stdio.h>

int main() {
    int arr[5], i, j;

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements:\n");
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}
