#include <stdio.h>

// Define a structure to hold x and y coordinates
typedef struct {
    int x;
    int y;
} Point;

// Function that takes a structure by value
void printPoint(Point p) {
    printf("Point: (%d, %d)\n", p.x, p.y);
}

int main() {
    // Declare and initialize a structure variable
    Point myPoint = {10, 20};

    // Pass the structure to the function by value
    printPoint(myPoint);

    return 0;
}
