//Q51 Write a program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345
#include <stdio.h>

int main() {
    int i, j, space;
    for (i = 5; i >= 1; i--) {       // starting number decreases
        // print leading spaces
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        // print numbers from i to 5
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");  // next line
    }
    return 0;
}
