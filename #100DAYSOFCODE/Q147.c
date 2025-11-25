// Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATAFILE "employees.dat"
#define NAME_LEN 50

typedef struct {
    int id;
    char name[NAME_LEN];
    int age;
    double salary;
} Employee;


static void strip_newline(char *s) {
    size_t n = strlen(s);
    if (n > 0 && s[n-1] == '\n') s[n-1] = '\0';
}


void add_employees(void) {
    FILE *fp = fopen(DATAFILE, "ab"); 
    if (!fp) {
        perror("Unable to open data file for appending");
        return;
    }

    int n;
    printf("How many employees to add? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number.\n");
        
        while (getchar() != '\n');
        fclose(fp);
        return;
    }
    while (getchar() != '\n'); 

    for (int i = 0; i < n; ++i) {
        Employee e;
        printf("\nEmployee %d details:\n", i + 1);

        printf("ID: ");
        while (scanf("%d", &e.id) != 1) {
            printf("Please enter a valid integer for ID: ");
            while (getchar() != '\n');
        }
        while (getchar() != '\n'); 

        printf("Name: ");
        if (!fgets(e.name, NAME_LEN, stdin)) {
            strncpy(e.name, "Unknown", NAME_LEN);
            e.name[NAME_LEN-1] = '\0';
        }
        strip_newline(e.name);

        printf("Age: ");
        while (scanf("%d", &e.age) != 1) {
            printf("Please enter a valid integer for age: ");
            while (getchar() != '\n');
        }
        while (getchar() != '\n');

        printf("Salary: ");
        while (scanf("%lf", &e.salary) != 1) {
            printf("Please enter a valid number for salary: ");
            while (getchar() != '\n');
        }
        while (getchar() != '\n');

       
        if (fwrite(&e, sizeof(Employee), 1, fp) != 1) {
            perror("Failed to write employee to file");
            break;
        } else {
            printf("Saved employee ID %d.\n", e.id);
        }
    }

    fclose(fp);
}


void list_employees(void) {
    FILE *fp = fopen(DATAFILE, "rb");
    if (!fp) {
        printf("No data file found (no employees saved yet).\n");
        return;
    }

    Employee e;
    printf("\n--- Employee List ---\n");
    int count = 0;
    while (fread(&e, sizeof(Employee), 1, fp) == 1) {
        printf("ID: %d\n", e.id);
        printf("Name: %s\n", e.name);
        printf("Age: %d\n", e.age);
        printf("Salary: %.2f\n", e.salary);
        printf("----------------------\n");
        ++count;
    }

    if (count == 0) printf("No records in file.\n");
    fclose(fp);
}


void search_employee(void) {
    FILE *fp = fopen(DATAFILE, "rb");
    if (!fp) {
        printf("No data file found.\n");
        return;
    }

    int target;
    printf("Enter employee ID to search: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        while (getchar() != '\n');
        fclose(fp);
        return;
    }

    Employee e;
    int found = 0;
    while (fread(&e, sizeof(Employee), 1, fp) == 1) {
        if (e.id == target) {
            printf("\nFound employee:\n");
            printf("ID: %d\n", e.id);
            printf("Name: %s\n", e.name);
            printf("Age: %d\n", e.age);
            printf("Salary: %.2f\n", e.salary);
            found = 1;
            break;
        }
    }

    if (!found) printf("Employee with ID %d not found.\n", target);
    fclose(fp);
}

int main(void) {
    int choice;
    printf("Employee Binary File Demo\n");
    for (;;) {
        printf("\nMenu:\n");
        printf("1. Add employees\n");
        printf("2. List all employees\n");
        printf("3. Search employee by ID\n");
        printf("4. Exit\n");
        printf("Choose an option: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice.\n");
            while (getchar() != '\n');
            continue;
        }
        while (getchar() != '\n');

        switch (choice) {
            case 1: add_employees(); break;
            case 2: list_employees(); break;
            case 3: search_employee(); break;
            case 4: printf("Exiting.\n"); exit(0);
            default: printf("Invalid option. Try again.\n");
        }
    }

    return 0;
}
