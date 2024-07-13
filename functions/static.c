#include <stdio.h>

// Static function declaration and definition
static void restrictedFunction(int secretCode) {
    if (secretCode == 1234) {
        printf("Access granted! Performing restricted operation...\n");
        // Perform restricted operation here
    } else {
        printf("Access denied!\n");
    }
}

int main() {
    int code = 1234;  // Secret code for accessing restricted function

    // Call restricted function directly
    restrictedFunction(code);

    return 0;
}
