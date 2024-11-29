#include <stdio.h>

int SumSeries(int a, int n) {
    int sum = 0;
    for (int i = n; i >= 1; i--) {
        sum += a * i;
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







#include <stdio.h>

int to_octal(int n) {
    int octal = 0, i = 1, r;

    while (n != 0) {
        r = n % 8;
        octal = octal + r * i;
        n = n / 8;
        i = i * 10;
    }

    return octal;
}

int main() {
    int decimal;

    printf("Enter the decimal number: ");
    scanf("%d", &decimal);

    printf("The octal equivalent is %d.\n", to_octal(decimal));

    return 0;
}
