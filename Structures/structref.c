#include <stdio.h>

// Define a structure to hold x and y coordinates
typedef struct {
    int x;
    int y;
} Point;

// Function that takes a structure by reference (pointer)
void modifyPoint(Point *p) {
    p->x = 15; // Modify the x member
    p->y = 25; // Modify the y member
}

int main() {
    // Declare and initialize a structure variable
    Point myPoint = {10, 20};

    // Print original values
    printf("Original Point: (%d, %d)\n", myPoint.x, myPoint.y);

    // Pass the structure to the function by reference
    modifyPoint(&myPoint);

    // Print modified values
    printf("Modified Point: (%d, %d)\n", myPoint.x, myPoint.y);

    return 0;
}
