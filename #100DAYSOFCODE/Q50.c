//Q50 Write a program to print the following pattern:
//*****
// ****
//  ***
//   **
//    *
#include <stdio.h>

int main() {
    int i, j, space, star;
    for (i = 0; i < 5; i++) {            // loop for rows
        // print spaces
        for (space = 0; space < i; space++) {
            printf(" ");
        }
        // print stars
        for (star = 5; star > i; star--) {
            printf("*");
        }
        printf("\n");   // move to next line
    }
    return 0;
}
