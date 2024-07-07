#include <stdio.h>

// Global variable declaration
int globalVar = 100;

// Static global variable declaration (limited to this file)
static int staticGlobalVar = 50;

// Extern global variable declaration (defined in another file)
extern int externGlobalVar;

// Function prototype
void func();

int main() {
    // Accessing and printing global variables
    printf("Global Variable (main.c): %d\n", globalVar);          // Output: 100
    printf("Static Global Variable (main.c): %d\n", staticGlobalVar);  // Output: 50
    printf("Extern Global Variable (main.c): %d\n", externGlobalVar);  // Output: Value of externGlobalVar from anotherFile.c

    // Calling function that uses a local variable
    func();

    return 0;
}

void func() {
    // Local variable declaration
    int localVar = 20;

    // Accessing and printing local variable
    printf("Local Variable (func): %d\n", localVar);  // Output: 20
}
