#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter the number N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 3 != 0) {
            sum += i;
        }
    }

    printf("The sum of the series is %d.\n", sum);

    return 0;
}





#include <stdio.h>

int main() {
    int num1, num2, num3, max, min;

    printf("Enter the three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    min = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

    printf("The maximum of the three numbers is %d.\n", max);
    printf("The minimum of the three numbers is %d.\n", min);

    return 0;
}





#include <stdio.h>

int main() {
    int n, num;

    printf("Enter the number of cases: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            printf("The number is even.\n");
        } else {
            printf("The number is odd.\n");
        }
    }

    return 0;
}





#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0) {
        num /= 10;
        count++;
    }

    printf("The number of digits in the number is %d.\n", count);

    return 0;
}




