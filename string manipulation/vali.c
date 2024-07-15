#include <stdio.h>
#include <ctype.h>

int main() {
    int ch = 'A'; // Example character

    // isalpha()
    printf("isalpha('%c') = %d\n", ch, isalpha(ch) != 0);

    // islower()
    printf("islower('%c') = %d\n", ch, islower(ch) != 0);

    // isupper()
    printf("isupper('%c') = %d\n", ch, isupper(ch) != 0);

    // isdigit()
    printf("isdigit('%c') = %d\n", ch, isdigit(ch) != 0);

    // ispunct()
    printf("ispunct('%c') = %d\n", ch, ispunct(ch) != 0);

    // tolower()
    printf("tolower('%c') = '%c'\n", ch, tolower(ch));

    // toupper()
    printf("toupper('%c') = '%c'\n", tolower(ch), toupper(ch));

    return 0;
}
