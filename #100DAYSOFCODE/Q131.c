// Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Day day;

    printf("Days of the Week with Values:\n");

    for (day = SUNDAY; day <= SATURDAY; day++) {
        printf("%d -> ", day);

        switch(day) {
            case SUNDAY: printf("SUNDAY\n"); break;
            case MONDAY: printf("MONDAY\n"); break;
            case TUESDAY: printf("TUESDAY\n"); break;
            case WEDNESDAY: printf("WEDNESDAY\n"); break;
            case THURSDAY: printf("THURSDAY\n"); break;
            case FRIDAY: printf("FRIDAY\n"); break;
            case SATURDAY: printf("SATURDAY\n"); break;
        }
    }

    return 0;
}
