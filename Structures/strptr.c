#include <stdio.h>

// Define a structure to hold an array of characters
typedef struct {
    char str[5];  // Array of characters (fixed size)
} ArrType;

// Define a structure to hold a pointer to a character (string)
typedef struct {
    char *str;    // Pointer to a character (string)
} PtrType;

// Initialize an ArrType structure variable
ArrType arr = { 'B', 'a', 'd', ' ', '\0' };

// Initialize a PtrType structure variable
PtrType ptr = { "Good " };

int main() {
    // Print initial value of arr.str (array of characters)
    printf("\nArray string is a %s", arr.str);

    // Modify arr.str to "Idea" by assigning individual characters
    arr.str[0] = 'I';
    arr.str[1] = 'd';
    arr.str[2] = 'e';
    arr.str[3] = 'a';
    arr.str[4] = '\0'; // Ensure null-termination for string printing

    // Print modified arr.str
    printf("%s\n", arr.str);

    // Print initial value of ptr.str (pointer to a string)
    printf("\nPointer string is a %s", ptr.str);

    // Assign a new string "Idea" to ptr.str
    ptr.str = "Idea";

    // Print modified ptr.str
    printf("%s\n", ptr.str);

    return 0;
}
