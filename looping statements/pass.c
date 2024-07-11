#include <stdio.h>

int main() {
    // Using break statement
    printf("Using break statement:\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;  // Exit the loop when i equals 3
        }
        printf("%d ", i);
    }
    printf("\n\n");

    // Using continue statement
    printf("Using continue statement:\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // Skip printing when i equals 3
        }
        printf("%d ", i);
    }
    printf("\n\n");

    // Using goto statement
    printf("Using goto statement:\n");
    int j = 1;
    start:
    if (j <= 5) {
        printf("%d ", j);
        j++;
        goto start;  // Jump back to 'start' label
    }
    printf("\n");

    return 0;
}
