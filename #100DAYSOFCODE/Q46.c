//Q46 Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****
#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {          // loop for rows
        for (j = 1; j <= 5; j++) {      // loop for columns
            printf("*");
        }
        printf("\n");   // move to next line after each row
    }
    return 0;
}
