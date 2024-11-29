#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, j = 0;

    // Take input for the string and the character to be deleted
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character: ");
    scanf("%c", &ch);

    // Remove occurrences of the character from the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }

    // Null terminate the new string
    str[j] = '\0';

    // Print the new string
    printf("New string is %s", str);

    return 0;
}
