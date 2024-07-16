#include <stdio.h>

// Define a structure to store a 2D point using typedef
typedef struct {
    int x;
    int y;
} Point;

// Define a structure to store a circle using typedef
typedef struct {
    Point center;
    float radius;
} Circle;

// Define a structure to store a rectangle using typedef
typedef struct {
    Point topLeft;
    Point bottomRight;
} Rectangle;

int main() {
    // Declare and initialize a Circle
    Circle myCircle;
    myCircle.center.x = 10;
    myCircle.center.y = 15;
    myCircle.radius = 5.5;

    // Declare and initialize a Rectangle
    Rectangle myRect;
    myRect.topLeft.x = 3;
    myRect.topLeft.y = 8;
    myRect.bottomRight.x = 15;
    myRect.bottomRight.y = 20;

    // Print Circle details
    printf("Circle Center: (%d, %d)\n", myCircle.center.x, myCircle.center.y);
    printf("Circle Radius: %.2f\n", myCircle.radius);

    // Print Rectangle details
    printf("Rectangle Top-Left: (%d, %d)\n", myRect.topLeft.x, myRect.topLeft.y);
    printf("Rectangle Bottom-Right: (%d, %d)\n", myRect.bottomRight.x, myRect.bottomRight.y);

    return 0;
}
