#include <stdio.h>

int main() {
    // Declaration and initialization of an array of integers
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing elements of the array
    printf("First element: %d\n", numbers[0]);    // Output: 1
    printf("Second element: %d\n", numbers[1]);   // Output: 2
    printf("Third element: %d\n", numbers[2]);    // Output: 3

    // Modifying an element of the array
    numbers[2] = 10;
    printf("Modified third element: %d\n", numbers[2]);   // Output: 10

    return 0;
}
