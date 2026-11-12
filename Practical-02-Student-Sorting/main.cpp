
#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    float cgpa;
};

// Add student using dynamic memory allocation
void addStudent(Student*& students, int& n) {
    Student* temp = new Student[n + 1];

    for (int i = 0; i < n; i++) {
        temp[i] = students[i];
    }

    cout << "\nEnter Student ID: ";
    cin >> temp[n].id;

    cout << "Enter Student Name: ";
    cin >> ws;
    getline(cin, temp[n].name);

    cout << "Enter CGPA: ";
    cin >> temp[n].cgpa;

    delete[] students;
    students = temp;
    n++;

    cout << "Student added successfully!\n";
}

// Display student records
void displayStudents(Student students[], int n) {
    if (n == 0) {
        cout << "No student records available!\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nID: " << students[i].id;
        cout << "\nName: " << students[i].name;
        cout << "\nCGPA: " << students[i].cgpa << "\n";
    }
}

// Bubble Sort by name (A to Z)
void sortByName(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].name > students[j + 1].name) {
                swap(students[j], students[j + 1]);
            }
        }
    }

    cout << "Students sorted by name!\n";
}

// Bubble Sort by CGPA
void sortByCGPA(Student students[], int n, bool ascending) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            bool condition;

            if (ascending)
                condition = students[j].cgpa > students[j + 1].cgpa;
            else
                condition = students[j].cgpa < students[j + 1].cgpa;

            if (condition) {
                swap(students[j], students[j + 1]);
            }
        }
    }

    cout << "Students sorted by CGPA!\n";
}

int main() {
    Student* students = nullptr;
    int n = 0;
    int choice;

    do {
        cout << "\n===== STUDENT DATABASE =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Sort by Name (A-Z)\n";
        cout << "4. Sort by CGPA (Ascending)\n";
        cout << "5. Sort by CGPA (Descending)\n";
        cout << "6. Exit\n";
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
                sortByName(students, n);
                displayStudents(students, n);
                break;

            case 4:
                sortByCGPA(students, n, true);
                displayStudents(students, n);
                break;

            case 5:
                sortByCGPA(students, n, false);
                displayStudents(students, n);
                break;

            case 6:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    delete[] students;

    return 0;
}