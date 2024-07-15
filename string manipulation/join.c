#include <stdio.h>
#include <string.h>

int main() {
    // Example 1: strncat(first_string, source_string, length);
    char s1[50] = "Hello";
    char s2[50] = " Ennbook";
    strncat(s1, s2, 3); // Appends first 3 characters of s2 to s1
    printf("Result after strncat: %s\n", s1); // Output: Hello Enn

    // Example 2: strncat(first_string, (source_string + places), length);
    char s3[50] = "Hello";
    char s4[50] = " Ennbook";
    strncat(s3, (s4 + 1), 4); // Appends 4 characters from s4 starting from index 1 to s3
    printf("Result after strncat: %s\n", s3); // Output: Hello Ennbook

    // Example 3: strcat(first_string, source_string);
    char s5[] = "hi ";
    char s6[] = "Copy me!";
    strcat(s5, s6); // Concatenates s6 to s5
    printf("Result after strcat: %s\n", s5); // Output: hi Copy me!

    return 0;
}
