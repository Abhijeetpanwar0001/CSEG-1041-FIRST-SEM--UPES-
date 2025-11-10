//  Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256]; // to store last index of each character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0; // start index of current window

    for (int end = 0; end < n; end++) {
        // if character repeats, move start pointer
        if (lastIndex[(unsigned char)s[end]] >= start)
            start = lastIndex[(unsigned char)s[end]] + 1;

        // update last seen index of current character
        lastIndex[(unsigned char)s[end]] = end;

        // calculate current window length
        int windowLen = end - start + 1;

        // update maximum length
        if (windowLen > maxLen)
            maxLen = windowLen;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}
