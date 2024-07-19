#include <stdio.h>

// Function declaration
void greet();
int square();

// Main function
int main() {
    // Call the greet function to print the first "Hello, World!" 
    greet();
    
    // Call the square function and store the return value in num
    int num = square();
    
    // Print the second "Hello, World!" followed by the result of the square function
    printf("Hello, World! %d\n", num);
    
    return 0;
}

// Function definition for square
int square() {
    // Calculate the square of 5 and store it in s
    int s = 5 * 5;
    // Return the result
    return s;
}

// Function definition for greet
void greet() {
    // Print "Hello, World!"
    printf("Hello, World!\n");
}
