#include <stdio.h>

// Define a union to hold different types of data using typedef
typedef union {
    int intValue;
    float floatValue;
    char charValue;
} DataUnion;

// Define a structure to hold different types of data using typedef
typedef struct {
    int intValue;
    float floatValue;
    char charValue;
} DataStruct;

int main() {
    // Declare variables of the union and structure types
    DataUnion myUnion;
    DataStruct myStruct;

    // Assign values to the union members
    myUnion.intValue = 42;

    // Assign values to the struct members
    myStruct.intValue = 42;
    myStruct.floatValue = 3.14f;
    myStruct.charValue = 'A';

    // Print the memory locations of the union members
    printf("Union memory locations:\n");
    printf("Address of intValue in union: %p\n", (void*)&myUnion.intValue);
    printf("Address of floatValue in union: %p\n", (void*)&myUnion.floatValue);
    printf("Address of charValue in union: %p\n", (void*)&myUnion.charValue);

    // Print the memory locations of the struct members
    printf("\nStruct memory locations:\n");
    printf("Address of intValue in struct: %p\n", (void*)&myStruct.intValue);
    printf("Address of floatValue in struct: %p\n", (void*)&myStruct.floatValue);
    printf("Address of charValue in struct: %p\n", (void*)&myStruct.charValue);

    return 0;
}
