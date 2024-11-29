#include <stdio.h>

int main() {
    int length, breadth, perimeter, area;

    printf("Enter the length: ");
    scanf("%d", &length);

    printf("Enter the breadth: ");
    scanf("%d", &breadth);

    perimeter = 2 * (length + breadth);
    area = length * breadth;

    printf("The perimeter of the rectangle is %d units and area is %d units.\n", perimeter, area);

    return 0;
}






#include <stdio.h>

int main() {
    int inputDays, years, weeks, days;

    printf("Enter the number of days: ");
    scanf("%d", &inputDays);

    years = inputDays / 365;
    weeks = (inputDays % 365) / 7;
    days = inputDays - (years * 365) - (weeks * 7);

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}
