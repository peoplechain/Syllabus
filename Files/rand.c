#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate and print 5 three-digit random numbers
    printf("Three-digit random numbers:\n");
    for (i = 0; i < 5; i++) {
        // Step 1: Generate a raw random number
        int raw_random_number = rand();
        
        // Step 2: Apply modulus operation to limit the range to 0-899
        int limited_random_number = raw_random_number % 900;
        
        // Step 3: Shift the range to 100-999
        int random_number = limited_random_number + 100;

        // Print the final three-digit random number
        printf("%d\n", random_number);
    }

    return 0;
}
