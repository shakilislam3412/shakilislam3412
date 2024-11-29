#include <stdio.h>
#include <stdlib.h>

int main() {
    int row, col;
    scanf("%d", &row);
    scanf("%d", &col);

    int **arr = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++) {
        arr[i] = (int *)malloc(col * sizeof(int));
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int trace = 0;
    for (int i = 0; i < row && i < col; i++) {
        trace += arr[i][i];
    }

    printf("%d\n", trace);

    for (int i = 0; i < row; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
















#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    fgets(str, sizeof(str), stdin);
    scanf("%c", &ch);

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == ch) {
            for (int j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            len--;
            i--;
        }
    }

    printf("%s", str);
    return 0;
}
