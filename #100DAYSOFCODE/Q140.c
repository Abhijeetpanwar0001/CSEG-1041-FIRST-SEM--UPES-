// Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    
    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);

    int g;
    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", &g);

    p.gender = g;

    
    printf("\n--- Person Details ---\n");
    printf("Name: %s", p.name);

    printf("Gender: ");
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid gender\n");
    }

    return 0;
}
