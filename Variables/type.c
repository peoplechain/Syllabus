#include <stdio.h>

int main() 
{
    char charVar = 'A';
    int intVar = 65;
    float floatVar = 3.14;
    float result;

    // Implicit type conversion (char to int)
    intVar = charVar;
    printf("Implicit Conversion - char to int: %d\n", intVar);  // Output: 65 (ASCII value of 'A')

    // Explicit type casting (int to char)
    charVar = (char)intVar;
    printf("Explicit Conversion - int to char: %c\n", charVar);  // Output: A

    // Implicit type conversion (int to float)
    result = intVar;
    printf("Implicit Conversion - int to float: %f\n", result);  // Output: 65.000000

    // Explicit type casting (float to int)
    intVar = (int)floatVar;
    printf("Explicit Conversion - float to int: %d\n", intVar);  // Output: 3 (decimal part is truncated)

    return 0;
}
