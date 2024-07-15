#include <stdio.h>
#include <stdlib.h> // for itoa, atoi

int main() {
    // Example using itoa
    int num1 = 123;
    char buffer1[20];
    itoa(num1, buffer1, 10);
    printf("Integer to string using itoa: %s\n", buffer1);

    // Example using atoi
    char str[] = "456";
    int num2 = atoi(str);
    printf("String to integer using atoi: %d\n", num2);

    // Example using sprintf
    char buffer3[50];
    int num3 = 789;
    sprintf(buffer3, "The number is: %d", num3);
    printf("Formatted string using sprintf: %s\n", buffer3);

    return 0;
}