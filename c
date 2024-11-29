#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    arr = (int*)calloc(3, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }

    printf("Enter an integer greater than 3: ");
    scanf("%d", &n);

    if (n <= 3) {
        printf("Please enter a number greater than 3.\n");
        free(arr);
        return -1;
    }

    arr = (int*)realloc(arr, n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }

    for (i = 3; i < n; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr);

    return 0;
}




#include <stdio.h>

int main() {
    char str[100], ch;
    int i;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Index of %c is %d\n", ch, i);
            return 0;
        }
    }

    printf("Character %c is not present\n", ch);

    return 0;
}








