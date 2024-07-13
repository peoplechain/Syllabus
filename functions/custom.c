// main.c

#include <stdio.h>
#include "header.h"  // Include custom header file

int main() {
    double side = 5.0;  // Side length of the square
    double area = calculateSquareArea(side);  // Call function declared in header.h
    printf("Area of the square with side length %.2f is %.2f\n", side, area);
    return 0;
}
