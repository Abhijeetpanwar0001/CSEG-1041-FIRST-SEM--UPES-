// Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>


struct Student {
    char name[50];
    int roll;
    float marks;
};


void printStudent(struct Student s) {
    printf("----- Student Details -----\n");
    printf("Name  : %s\n", s.name);
    printf("Roll  : %d\n", s.roll);
    printf("Marks : %.2f\n", s.marks);
}

int main() {
    struct Student st;

    
    printf("Enter name: ");
    scanf("%s", st.name);

    printf("Enter roll number: ");
    scanf("%d", &st.roll);

    printf("Enter marks: ");
    scanf("%f", &st.marks);

    
    printStudent(st);

    return 0;
}
