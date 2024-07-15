#include <stdio.h>
#include <string.h>

int main() {
    // Define the main string and the substring to search for
    char str[] = "Have A Nice Day";
    char sub[] = "Nice";

    // Use strstr to find the first occurrence of sub in str
    if (strstr(str, sub) == NULL) {
        // If strstr returns NULL, the substring was not found
        printf("Substring \"Nice\" Not Found\n");
    } else {
        // If strstr returns a non-NULL pointer, the substring was found
        printf("Substring \"Nice\" Found at %p\n", strstr(str, sub)); // Print the pointer where the substring starts
        printf("Element Index Number %ld\n\n", strstr(str, sub) - str); // Calculate and print the index of the found substring
    }

    // Compare the substring with different cases using strcmp
    printf("%s Versus \"Nice\": %d\n", sub, strcmp(sub, "Nice")); // Compare with "Nice"
    printf("%s Versus \"nice\": %d\n", sub, strcmp(sub, "nice")); // Compare with "nice"
    printf("%s Versus \"NICE\": %d\n", sub, strcmp(sub, "NICE")); // Compare with "NICE"

    return 0; // Return 0 to indicate successful execution
}
