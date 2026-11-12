
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_SIZE 100

struct Student {
    int id;
    char name[NAME_SIZE];
    float cgpa;
};

// Display student records
void displayStudents(struct Student *s, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nID: %d", s[i].id);
        printf("\nName: %s", s[i].name);
        printf("\nCGPA: %.2f\n", s[i].cgpa);
    }
}

// Add a student using realloc()
void addStudent(struct Student **s, int *n) {
    struct Student *temp;

    temp = (struct Student *)realloc(
        *s, (*n + 1) * sizeof(struct Student)
    );

    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    *s = temp;

    printf("Enter Student ID: ");
    scanf("%d", &(*s)[*n].id);

    printf("Enter Student Name: ");
    scanf(" %99[^\n]", (*s)[*n].name);

    printf("Enter CGPA: ");
    scanf("%f", &(*s)[*n].cgpa);

    (*n)++;

    printf("Student added successfully!\n");
}

// Bubble Sort by name (A to Z)
void sortByName(struct Student s[], int n) {
    struct Student temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(s[j].name, s[j + 1].name) > 0) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("Students sorted by name!\n");
}

// Bubble Sort by CGPA
void sortByCGPA(struct Student s[], int n, int order) {
    struct Student temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            int condition;

            if (order == 1)
                condition = s[j].cgpa > s[j + 1].cgpa;
            else
                condition = s[j].cgpa < s[j + 1].cgpa;

            if (condition) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("Students sorted by CGPA!\n");
}

int main() {
    struct Student *students = NULL;
    int n = 0;
    int choice;

    do {
        printf("\n===== STUDENT DATABASE =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Sort by Name (A-Z)\n");
        printf("4. Sort by CGPA (Ascending)\n");
        printf("5. Sort by CGPA (Descending)\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(&students, &n);
                break;

            case 2:
                if (n == 0)
                    printf("No student records available!\n");
                else
                    displayStudents(students, n);
                break;

            case 3:
                sortByName(students, n);
                displayStudents(students, n);
                break;

            case 4:
                sortByCGPA(students, n, 1);
                displayStudents(students, n);
                break;

            case 5:
                sortByCGPA(students, n, 2);
                displayStudents(students, n);
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    free(students);

    return 0;
}