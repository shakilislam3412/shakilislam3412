#include <stdio.h>

int perfect(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return (sum == n) ? 1 : 0;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (perfect(n)) {
        printf("The number is a perfect number.\n");
    } else {
        printf("The number is not a perfect number.\n");
    }

    return 0;
}
