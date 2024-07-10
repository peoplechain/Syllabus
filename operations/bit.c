#include <stdio.h>

int main() {
    int a = 5, b = 3;
    int and, or, xor, not, leftShift, rightShift;

    and = a & b;
    or = a | b;
    xor = a ^ b;
    not = ~a;
    leftShift = a << 1;
    rightShift = a >> 1;

    printf("a & b: %d\n", and);
    printf("a | b: %d\n", or);
    printf("a ^ b: %d\n", xor);
    printf("~a: %d\n", not);
    printf("a << 1: %d\n", leftShift);
    printf("a >> 1: %d\n", rightShift);

    return 0;
}
