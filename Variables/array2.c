#include <stdio.h>

int main() {
    // Declaration and initialization of a 2x2 array of integers
    int matrix[2][2] = {
        {1, 2},
        {3, 4}
    };

    // Accessing elements of the array
    printf("Element at matrix[0][0]: %d\n", matrix[0][0]);   // Output: 1
    printf("Element at matrix[0][1]: %d\n", matrix[0][1]);   // Output: 2
    printf("Element at matrix[1][0]: %d\n", matrix[1][0]);   // Output: 3
    printf("Element at matrix[1][1]: %d\n", matrix[1][1]);   // Output: 4

    // Modifying an element of the array
    matrix[1][1] = 10;
    printf("Modified element at matrix[1][1]: %d\n", matrix[1][1]);   // Output: 10

    return 0;
}
