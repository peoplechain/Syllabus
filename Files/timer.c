#include <stdio.h>
#include <time.h>

void wait(int seconds);

int main() {
    time_t start, end;
    int i;

    // Get the current time as the start time
    start = time(NULL);
    printf("\nStarting countdown...\n\n");

    // Countdown from 10 to 0
    for (i = 10; i >= 0; i--) {
        printf(" - %d", i);
        wait(1); // Wait for 1 second
    }

    // Get the current time as the end time
    end = time(NULL);
    printf("\nRuntime: %.0f seconds\n", difftime(end, start));

    return 0;
}

void wait(int seconds) {
    clock_t end_wait = clock() + seconds * CLOCKS_PER_SEC;
    while (clock() < end_wait) {
        // Busy-wait loop
    }
}
