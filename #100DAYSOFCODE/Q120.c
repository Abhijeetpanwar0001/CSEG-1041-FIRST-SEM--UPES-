// Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    
    int i = 0;
    while (str[i] == ' ') i++;  
    if (str[i] != '\0')
        str[i] = toupper(str[i]);

    
    for (int j = i + 1; str[j] != '\0'; j++) {
        str[j] = tolower(str[j]);
    }

    printf("Sentence case: %s", str);

    return 0;
}
