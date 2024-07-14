#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // ptr points to arr[0]

    // Incrementing pointer
    printf("Initial value: %d\n", *ptr); // Output: 1
    ptr++;
    printf("After incrementing: %d\n", *ptr); // Output: 2

    // Adding an integer to pointer
    ptr += 2;
    printf("After adding 2: %d\n", *ptr); // Output: 4

    // Subtracting an integer from pointer
    ptr -= 1;
    printf("After subtracting 1: %d\n", *ptr); // Output: 3

    // Subtracting two pointers
    int *ptr1 = &arr[4];
    int *ptr2 = arr;
    int difference = ptr1 - ptr2;
    printf("Difference between ptr1 and ptr2: %d\n", difference); // Output: 4

    return 0;
}
