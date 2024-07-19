#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];

    // Open file for reading
    file = fopen("example.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    // Read and print content
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(file);
getchar();
    return 0;
}
