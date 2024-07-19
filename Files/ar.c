#include <stdio.h>

int main() {
    FILE *file;

    // Open file for appending and reading
    file = fopen("example.txt", "a+");
    if (file == NULL) {
        printf("Error opening file for appending and reading");
        return 1;
    }

    // Append new content to the file
    fprintf(file, "Appending more content.\n");

    // Move the file pointer to the beginning for reading
    fseek(file, 0, SEEK_SET);

    // Read and print the content
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("Read: %s", buffer);
    }

    // Close the file
    fclose(file);

    return 0;
}
