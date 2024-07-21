#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    // Get the current time
    time(&rawtime);

    // Convert to local time
    timeinfo = localtime(&rawtime);

    // Print the local time using asctime
    printf("Current local time: %s", asctime(timeinfo));

    // Format the time using strftime
    strftime(buffer, sizeof(buffer), "Formatted date and time: %Y-%m-%d %H:%M:%S", timeinfo);
    printf("%s\n", buffer);

    // Get the UTC time
    timeinfo = gmtime(&rawtime);

    // Print the UTC time using asctime
    printf("Current UTC time: %s", asctime(timeinfo));

    return 0;
}
