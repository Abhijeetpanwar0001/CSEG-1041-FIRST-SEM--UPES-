//Q52 Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*
#include <stdio.h>

int main() {
    int rows[] = {1, 2, 5, 3, 1};  // number of stars in each block
    int n = sizeof(rows)/sizeof(rows[0]);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < rows[i]; j++) {
            printf("*\n");
        }
        printf("\n");  // empty line to separate blocks
    }
    return 0;
}
