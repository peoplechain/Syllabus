#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[100];

    // Open file for writing
    file = fopen("stdinout.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    // Use fputc to write a character
    fputc('A', file);

    // Use fputs to write a string
    fputs("Hello, World!\n", file);

    // Use fprintf to write formatted output
    fprintf(file, "Number: %d\n", 42);

    // Close the file
    fclose(file);

    // Open file for reading and writing
    file = fopen("stdinout.txt", "r+");
    if (file == NULL) {
        perror("Error opening file for reading and writing");
        return 1;
    }

    // Use fgetc to read a character
    int c = fgetc(file);
    printf("Read character: %c\n", c);

    // Move the file pointer to the beginning for reading
    fseek(file, 0, SEEK_SET);

    // Use fgets to read a string
    fgets(buffer, sizeof(buffer), file);
    printf("Read string: %s", buffer);

    // Move the file pointer to the beginning for reading
    fseek(file, 0, SEEK_SET);

    // Use fread to read data
    fread(buffer, sizeof(char), 13, file); // Read 13 characters
    buffer[13] = '\0'; // Null-terminate the string
    printf("Read data: %s\n", buffer);

    // Use fseek to move the file pointer to the end
    fseek(file, 0, SEEK_END);

    // Use fwrite to write data
    const char *data = "Appending data";
    fwrite(data, sizeof(char), strlen(data), file);

    // Close and reopen the file for reading
    fclose(file);
    file = fopen("stdinout.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    // Use fscanf to read formatted input
    fscanf(file, "%s", buffer);
    printf("Read formatted input: %s\n", buffer);

    // Close the file
    fclose(file);

    return 0;
}
