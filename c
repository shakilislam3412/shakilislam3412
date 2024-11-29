#include <stdio.h>

int main() {
    float num1, num2, sum, difference;
    printf("Enter the two numbers: ");
    scanf("%f %f", &num1, &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    printf("The sum of %f and %f is %f.\n", num1, num2, sum);
    printf("The difference of %f and %f is %f.\n", num1, num2, difference);
    return 0;
}
