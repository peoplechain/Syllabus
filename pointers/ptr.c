#include <stdio.h>

int main() {
    int x = 10;     // Regular variable
    int *ptr = &x;  // Pointer variable

    // Print the regular variable
    printf("Value of x: %d\n", x);

    // Print the storage address of the regular variable
    printf("Address of x: %p\n", (void*)&x);

    // Print the address contained in the pointer variable
    printf("Address stored in ptr: %p\n", (void*)ptr);

    // Print the value contained at the address stored in the pointer variable
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}
