#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    int num = 5;
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result); // Output: Factorial of 5 is 120
    return 0;
}

// Function definition
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case: n! = n * (n-1)!
    }
}
