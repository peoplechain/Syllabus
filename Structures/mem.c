#include <stdio.h>

// Define a structure to hold x and y coordinates
typedef struct {
    int x;
    int y;
} Point;

int main() {
    // Declare a structure variable of type Point
    Point myPoint = { 10, 20 };

    // Declare a pointer to a Point structure and initialize it to point to myPoint
    Point *ptrPoint = &myPoint;

    // Print original values using structure variable
    printf("Original Point: (%d, %d)\n", myPoint.x, myPoint.y);

    // Access and modify structure members via pointer
    ptrPoint->x = 15;
    ptrPoint->y = 25;

    // Print modified values using pointer dereferencing
    printf("Modified Point: (%d, %d)\n", ptrPoint->x, ptrPoint->y);

    return 0;
}
