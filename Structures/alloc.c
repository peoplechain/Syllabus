#include <stdio.h>
#include <stdlib.h>  // Required for malloc, calloc, and free

int main() {
    // Define an integer and a pointer to it
    int num = 10;
    int *ptr;

    // Use sizeof to determine the size of an int
    printf("Size of int: %zu bytes\n", sizeof(int));

    // Allocate memory using malloc
    ptr = (int*) malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed using malloc\n");
        return 1;
    }
    *ptr = num;
    printf("Value at allocated memory using malloc: %d\n", *ptr);

    // Free the allocated memory
    free(ptr);
    ptr = NULL; // Best practice to set pointer to NULL after freeing

    // Allocate memory using calloc for an array of 5 integers
    int *arr = (int*) calloc(5, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed using calloc\n");
        return 1;
    }

    // Print initial values (should be 0 because calloc initializes memory)
    printf("Values in allocated array using calloc:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Assign values to the array
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
    }

    // Print updated values
    printf("Updated values in allocated array using calloc:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
