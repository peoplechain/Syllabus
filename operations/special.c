#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int sum;

    // Using comma operator in assignment
    sum = (a += 5, b += 10, c += 15);

    // Displaying the updated values and the sum using sizeof operator
    printf("Updated values: a = %d, b = %d, c = %d\n", a, b, c);
    printf("Sum: %d\n", sum);
    
    // Using sizeof operator to print the size of variables
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of a: %lu bytes\n", sizeof(a));
    printf("Size of b: %lu bytes\n", sizeof(b));
    printf("Size of c: %lu bytes\n", sizeof(c));

    return 0;
}
