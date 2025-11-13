// Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
#include <stdio.h>

int main() {
    FILE *file;
    char line[100]; 

    
    file = fopen("info.txt", "r");

    
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1; // Exit if file not found or cannot be opened
    }

    printf("Contents of info.txt:\n\n");

    
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    
    fclose(file);

    printf("\n\nFile reading completed successfully.\n");

    return 0;
}
