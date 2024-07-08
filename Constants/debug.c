#include <stdio.h>

#define DEBUG 1

int main() {
#ifdef DEBUG
    printf("Debugging information\n");
#endif

    printf("Program continues...\n");

    return 0;
}
