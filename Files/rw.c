#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];

    // Open file for reading and writing
    file = fopen("example.txt", "r+");
    if (file == NULL) {
        perror("Error opening file for reading and writing");
        return 1;
    }

    // Read the current content
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("Read: %s", buffer);
    }

   

    // Write new content to the file
    fprintf(file, "This is new content.\n");

    // Close the file
    fclose(file);

    return 0;
}
