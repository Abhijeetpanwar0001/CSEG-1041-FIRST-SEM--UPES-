//Q20 Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-7) for the day of the week: ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Day: Sunday\n");
            break;
        case 2:
            printf("Day: Monday\n");
            break;
        case 3:
            printf("Day: Tuesday\n");
            break;
        case 4:
            printf("Day: Wednesday\n");
            break;
        case 5:
            printf("Day: Thursday\n");
            break;
        case 6:
            printf("Day: Friday\n");
            break;
        case 7:
            printf("Day: Saturday\n");
            break;
        default:
            printf("Invalid input!\n");
    }

    return 0;
}
