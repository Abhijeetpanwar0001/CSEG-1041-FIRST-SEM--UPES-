// Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
    } else {
        printf("\n--- File Content ---\n");
        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }
        fclose(fp);
    }

    return 0;
}
