#include <stdio.h>

int main() {
    // Array of pointers to integers
    int *ptrArray[3]; // Array with 3 elements, each element is an int pointer

    // Individual integers
    int a = 10, b = 20, c = 30;

    // Assigning addresses of integers to pointers in array
    ptrArray[0] = &a;
    ptrArray[1] = &b;
    ptrArray[2] = &c;

    // Accessing and printing values using array of pointers to integers
    printf("Values using array of pointers to integers:\n");
    for (int i = 0; i < 3; i++) {
        printf("Value at ptrArray[%d]: %d, Address: %p\n", i, *ptrArray[i], (void *)ptrArray[i]);
    }

    // Array of pointers to strings (character arrays)
    char *names[3] = {"Alice", "Bob", "Charlie"};

    // Accessing and printing strings using array of pointers to character arrays
    printf("\nStrings using array of pointers to character arrays:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name %d: %s, Address: %p\n", i, names[i], (void *)names[i]);
    }

    return 0;
}