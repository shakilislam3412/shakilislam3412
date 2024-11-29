#include <stdio.h>

int main() {
    int X, Y;

    printf("Enter the values of X and Y: ");
    scanf("%d %d", &X, &Y);

    if (X > Y) {
        printf("No even numbers are possible.\n");
    } else {
        printf("The even numbers are: ");
        for (int i = X; i <= Y; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}







#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num /= 10;
    }

    if (sum == originalNum) {
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n");
    }

    return 0;
}
