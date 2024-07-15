#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[50];
    char destination_n[50];
    int length;

    // Using strcpy
    strcpy(destination, source);
    printf("Copied using strcpy: %s\n", destination);

    // Using strncpy
    strncpy(destination_n, source, 5);
    destination_n[5] = '\0'; // Manually adding null terminator
    printf("Copied using strncpy: %s\n", destination_n);

    // Using strlen
    length = strlen(source);
    printf("Length of source string: %d\n", length);

    return 0;
}
