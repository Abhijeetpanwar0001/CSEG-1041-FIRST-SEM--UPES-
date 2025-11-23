// Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};


struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];   
}

int main() {
    int n, i;
    struct Student students[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    struct Student top = getTopStudent(students, n);

    printf("\n--- Top Student Details ---\n");
    printf("Name  : %s\n", top.name);
    printf("Roll  : %d\n", top.roll);
    printf("Marks : %.2f\n", top.marks);

    return 0;
}
