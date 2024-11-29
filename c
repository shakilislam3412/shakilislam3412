#include <stdio.h>

int main() {
    int N, num, largest, smallest;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Enter the %d values: ", N);
    scanf("%d", &num);
    largest = smallest = num;

    for (int i = 1; i < N; i++) {
        scanf("%d", &num);
        if (num > largest) largest = num;
        if (num < smallest) smallest = num;
    }

    printf("The largest value is %d, and the smallest value is %d.\n", largest, smallest);

    return 0;
}




#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter the value of two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("The HCF is %d.\n", a);

    return 0;
}
