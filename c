#include <stdio.h>

int SumSeries(int a, int n) {
    int sum = 0;
    for (int i = n; i >= 1; i--) {
        int term = 1;
        for (int j = 1; j <= i; j++) {
            term *= a;
        }
        sum += term;
    }
    return sum + 1;
}

int main() {
    int a, n;

    printf("Enter the values of a and n: ");
    scanf("%d %d", &a, &n);

    printf("The sum of the series is %d.\n", SumSeries(a, n));

    return 0;
}
