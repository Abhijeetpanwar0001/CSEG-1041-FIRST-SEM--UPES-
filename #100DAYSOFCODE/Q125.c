// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char newLine[200];

    
    printf("Enter the filename to append to: ");
    scanf("%s", filename);
    getchar(); 

    
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    
    printf("Enter the line to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    
    fputs(newLine, file);

    printf("Text appended successfully to '%s'.\n", filename);

    
    fclose(file);

    return 0;
}
