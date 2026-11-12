
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <limits>
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
        cout << "Memory allocation failed!\n";
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
    cout << "Student added successfully!\n";
}

// Display student records
void displayStudents(Student* students, int n) {
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

// Selection Sort by Name (A-Z)
void selectionSortByName(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (strcmp(students[j].name,
                       students[minIndex].name) < 0) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            Student temp = students[i];
            students[i] = students[minIndex];
            students[minIndex] = temp;
        }
    }

    cout << "\nSorted by Name (A-Z) using Selection Sort.\n";
}

// Selection Sort by CGPA
void selectionSortByCGPA(Student students[], int n,
                         bool ascending) {
    for (int i = 0; i < n - 1; i++) {
        int selectedIndex = i;

        for (int j = i + 1; j < n; j++) {
            bool condition;

            if (ascending) {
                condition = students[j].cgpa <
                            students[selectedIndex].cgpa;
            } else {
                condition = students[j].cgpa >
                            students[selectedIndex].cgpa;
            }

            if (condition) {
                selectedIndex = j;
            }
        }

        if (selectedIndex != i) {
            Student temp = students[i];
            students[i] = students[selectedIndex];
            students[selectedIndex] = temp;
        }
    }

    cout << "\nSorted by CGPA using Selection Sort.\n";
}

// Insertion Sort by Student ID
void insertionSortByID(Student students[], int n) {
    for (int i = 1; i < n; i++) {
        Student key = students[i];
        int j = i - 1;

        while (j >= 0 && students[j].id > key.id) {
            students[j + 1] = students[j];
            j--;
        }

        students[j + 1] = key;
    }

    cout << "\nSorted by Student ID using Insertion Sort.\n";
}

int main() {
    Student* students = nullptr;
    int n = 0;
    int choice;

    do {
        cout << "\n===== STUDENT DATABASE =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Sort by Name (A-Z) - Selection Sort\n";
        cout << "4. Sort by CGPA (Ascending) - Selection Sort\n";
        cout << "5. Sort by CGPA (Descending) - Selection Sort\n";
        cout << "6. Sort by ID - Insertion Sort\n";
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
                selectionSortByName(students, n);
                displayStudents(students, n);
                break;

            case 4:
                selectionSortByCGPA(students, n, true);
                displayStudents(students, n);
                break;

            case 5:
                selectionSortByCGPA(students, n, false);
                displayStudents(students, n);
                break;

            case 6:
                insertionSortByID(students, n);
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
