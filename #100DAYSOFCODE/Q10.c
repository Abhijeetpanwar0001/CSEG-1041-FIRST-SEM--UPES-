//Q10:Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Converting to hours, minutes, seconds
    hours = totalSeconds / 3600;          // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60; // remaining minutes
    seconds = totalSeconds % 60;          // remaining seconds

    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
