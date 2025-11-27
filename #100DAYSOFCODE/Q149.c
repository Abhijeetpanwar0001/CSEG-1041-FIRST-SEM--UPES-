//  Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *ptr;

    
    ptr = (struct Student *)malloc(sizeof(struct Student));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    
    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", ptr->name);
    printf("Roll  : %d\n", ptr->roll);
    printf("Marks : %.2f\n", ptr->marks);

    
    free(ptr);

    return 0;
}
