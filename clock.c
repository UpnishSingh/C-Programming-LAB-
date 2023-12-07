#include <stdio.h>
#include <time.h>

int main()
 {

    while (1)
     {
        time_t currentTime;
        struct tm *timeInfo;

        time(&currentTime);
        timeInfo = localtime(&currentTime);

        int hours = timeInfo->tm_hour;
        int minutes = timeInfo->tm_min;
        int seconds = timeInfo->tm_sec;

        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
        
    }

    return 0;
}
