#include <stdio.h>

// Define an enumeration named Weekday
enum Weekday {
    MONDAY,    // MONDAY = 0
    TUESDAY,   // TUESDAY = 1
    WEDNESDAY, // WEDNESDAY = 2
    THURSDAY,  // THURSDAY = 3
    FRIDAY,    // FRIDAY = 4
    SATURDAY,  // SATURDAY = 5
    SUNDAY     // SUNDAY = 6
};

int main() {
    enum Weekday today = TUESDAY;

    switch (today) {
        case MONDAY:
            printf("Today is Monday\n");
            break;
        case TUESDAY:
            printf("Today is Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Today is Wednesday\n");
            break;
        case THURSDAY:
            printf("Today is Thursday\n");
            break;
        case FRIDAY:
            printf("Today is Friday\n");
            break;
        case SATURDAY:
            printf("Today is Saturday\n");
            break;
        case SUNDAY:
            printf("Today is Sunday\n");
            break;
        default:
            printf("Unknown day\n");
            break;
    }

    return 0;
}
