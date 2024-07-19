#include <stdio.h>

int main() {
    FILE *file;

    // Open file for writing
    file = fopen("example.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    // Write to the file
    fprintf(file, "Hello, World!\n");

    // Close the file
    fclose(file);

    return 0;
}
