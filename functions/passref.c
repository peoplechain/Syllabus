#include <stdio.h>

// Function declaration
void addTen(int *n);

int main() {
    int num = 5;
    addTen(&num);
    printf("Value of num after function call: %d\n", num); // Output: 15
    return 0;
}

// Function definition
void addTen(int *n) {
    *n = *n + 10;
    printf("Value inside function: %d\n", *n); // Output: 15
}
