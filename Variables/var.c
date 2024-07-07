#include <stdio.h>

int main() {
    int num;
    float float_num;
    char ch;
    char str[50];
    int num1 = 6;

    // Input integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Input float
    printf("Enter a float number: ");
    scanf("%f", &float_num);

    // Input character
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note the space before %c to skip leading whitespace

    // Input string
    printf("Enter a string (without spaces): ");
    scanf("%s", str);

    // Displaying input values
    printf("\nInteger: %d\n", num);
    printf("Float: %f\n", float_num);
    printf("Character: %c\n", ch);
    printf("String: %s\n", str);
    printf("Memory address of num1 = %p",&num1);

    return 0;
}