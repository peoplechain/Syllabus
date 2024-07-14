#include <stdio.h>

// Function prototype
void updateValue(int *ptr);

int main() {
    int x = 10; // Regular variable

    // Print original value
    printf("Original value of x: %d\n", x);

    // Call function with the address of x
    updateValue(&x);

    // Print updated value
    printf("Updated value of x: %d\n", x);

    return 0;
}

// Function definition
void updateValue(int *ptr) {
    *ptr = 20; // Update the value at the address ptr points to
}
