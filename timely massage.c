#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime = time(NULL);
    struct tm *timeInfo = localtime(&currentTime);

    if (timeInfo->tm_hour == 6 && timeInfo->tm_min == 0) {
        printf("Good morning, mom!\n");
    }

    return 0;
}
