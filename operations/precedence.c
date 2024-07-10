#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 5;
    int result;

    // Without parentheses: multiplication has higher precedence than addition
    result = a + b * c;   // Equivalent to a + (b * c)
    printf("Result without parentheses: %d\n", result);

    // With parentheses: parentheses have higher precedence than multiplication
    result = (a + b) * c;
    printf("Result with parentheses: %d\n", result);

    return 0;
}
