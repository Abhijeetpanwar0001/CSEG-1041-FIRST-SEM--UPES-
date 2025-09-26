//Q54 Write a program to print the following pattern:

//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
#include <stdio.h>

int main() {
    int n = 4; // height of the upper half

    // Top half (increasing stars)
    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // print stars
        for (int j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half (decreasing stars)
    for (int i = n-1; i >= 1; i--) {
        // print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // print stars
        for (int j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
