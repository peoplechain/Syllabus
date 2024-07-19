#include <stdio.h>

int main() {
    FILE *file;

    // Open file for writing and reading
    file = fopen("example1.txt", "w+");
    if (file == NULL) {
        printf("Error opening file for writing and reading\n");
        return 1;
    }

    // Write new content to the file
    fprintf(file, "Second New content written to file.\n");

    // Move the file pointer to the beginning of the file for reading
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