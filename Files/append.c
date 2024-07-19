#include <stdio.h>

int main() {
    FILE *file;

    // Open file for appending
    file = fopen("example.txt", "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        return 1;
    }

    // Append to the file
    fprintf(file, "Appending this line.\n");

    // Close the file
    fclose(file);

    return 0;
}
