
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct Student {
    int id;
    char name[100];
    float cgpa;
};

// Add student using realloc()
void addStudent(Student*& students, int& n) {
    Student* temp = static_cast<Student*>(
        realloc(students, (n + 1) * sizeof(Student))
    );

    if (temp == nullptr) {
        cout << "\nMemory allocation failed!\n";
        return;
    }

    students = temp;

    cout << "\nEnter Student ID: ";
    cin >> students[n].id;

    cout << "Enter Student Name: ";
    cin >> ws;
    cin.getline(students[n].name, 100);

    cout << "Enter CGPA: ";
    cin >> students[n].cgpa;

    n++;
    cout << "\nStudent added successfully!\n";
}

// Display student records
void displayStudents(Student students[], int n) {
    if (n == 0) {
        cout << "\nNo student records available!\n";
        return;
    }

    cout << "\n===== STUDENT RECORDS =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nID: " << students[i].id
             << "\nName: " << students[i].name
             << "\nCGPA: " << students[i].cgpa << "\n";
    }
}

// Insertion Sort by Name (A-Z)
void insertionSortByName(Student students[], int n) {
    for (int i = 1; i < n; i++) {
        Student key = students[i];
        int j = i - 1;

        while (j >= 0 &&
               strcmp(students[j].name, key.name) > 0) {
            students[j + 1] = students[j];
            j--;
        }

        students[j + 1] = key;
    }

    cout << "\nSorted by Name (A-Z) using Insertion Sort.\n";
}

// Insertion Sort by CGPA
void insertionSortByCGPA(Student students[], int n,
                         bool ascending) {
    for (int i = 1; i < n; i++) {
        Student key = students[i];
        int j = i - 1;

        while (j >= 0) {
            bool condition;

            if (ascending) {
                condition = students[j].cgpa > key.cgpa;
            } else {
                condition = students[j].cgpa < key.cgpa;
            }

            if (!condition)
                break;

            students[j + 1] = students[j];
            j--;
        }

        students[j + 1] = key;
    }

    cout << "\nSorted by CGPA using Insertion Sort.\n";
}

// Selection Sort by Student ID
void selectionSortByID(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (students[j].id < students[minIndex].id) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            Student temp = students[i];
            students[i] = students[minIndex];
            students[minIndex] = temp;
        }
    }

    cout << "\nSorted by Student ID using Selection Sort.\n";
}

int main() {
    Student* students = nullptr;
    int n = 0;
    int choice;

    do {
        cout << "\n===== STUDENT DATABASE =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Sort by Name (A-Z) - Insertion Sort\n";
        cout << "4. Sort by CGPA (Ascending) - Insertion Sort\n";
        cout << "5. Sort by CGPA (Descending) - Insertion Sort\n";
        cout << "6. Sort by ID - Selection Sort\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students, n);
                break;

            case 2:
                displayStudents(students, n);
                break;

            case 3:
                insertionSortByName(students, n);
                displayStudents(students, n);
                break;

            case 4:
                insertionSortByCGPA(students, n, true);
                displayStudents(students, n);
                break;

            case 5:
                insertionSortByCGPA(students, n, false);
                displayStudents(students, n);
                break;

            case 6:
                selectionSortByID(students, n);
                displayStudents(students, n);
                break;

            case 7:
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice! Try Again.\n";
        }

    } while (choice != 7);

    free(students);

    return 0;
}
