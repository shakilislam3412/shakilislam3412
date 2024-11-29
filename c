#include <stdio.h>
#include <math.h>

double area(double a, double b, double c) {
    double s = 0.5 * (a + b + c);
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double perimeter(double a, double b, double c) {
    return a + b + c;
}

int main() {
    double a, b, c;

    printf("Enter the sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("The area of the triangle is %.2lf units.\n", area(a, b, c));
    printf("The perimeter of the triangle is %.2lf units.\n", perimeter(a, b, c));

    return 0;
}




#include <stdio.h>

long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;

    printf("Enter the number n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("The number is not a non-negative number.\n");
    } else {
        printf("Factorial of %d is %lld.\n", n, factorial(n));
    }

    return 0;
}
