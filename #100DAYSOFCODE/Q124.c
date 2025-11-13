// Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    char ch;

    
    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    
    destination = fopen(destFile, "w");
    if (destination == NULL) {
        printf("Error: Could not create destination file.\n");
        fclose(source);
        return 1;
    }

    
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully from '%s' to '%s'.\n", sourceFile, destFile);

    
    fclose(source);
    fclose(destination);

    return 0;
}
