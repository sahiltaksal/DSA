
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Student {
    int id;
    string name;
    float cgpa;
};

// Linear Search
int linearSearch(Student students[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (students[i].id == key)
            return i;
    }
    return -1;
}

// Binary Search (requires sorted student IDs)
int binarySearch(Student students[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (students[mid].id == key)
            return mid;
        else if (students[mid].id < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Student ID: ";
        cin >> students[i].id;

        cout << "Enter Student Name: ";
        cin >> ws;
        getline(cin, students[i].name);

        cout << "Enter CGPA: ";
        cin >> students[i].cgpa;
    }

    int choice, key;

    do {
        cout << "\n===== STUDENT DATABASE =====\n";
        cout << "1. Display Students\n";
        cout << "2. Linear Search\n";
        cout << "3. Binary Search\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < n; i++) {
                    cout << "\nID: " << students[i].id
                         << "\nName: " << students[i].name
                         << "\nCGPA: " << students[i].cgpa << "\n";
                }
                break;

            case 2:
                cout << "Enter Student ID to search: ";
                cin >> key;

                {
                    int result = linearSearch(students, n, key);
                    if (result != -1)
                        cout << "Student Found: "
                             << students[result].name << "\n";
                    else
                        cout << "Student Not Found\n";
                }
                break;

            case 3:
                sort(students, students + n,
                     [](Student a, Student b) {
                         return a.id < b.id;
                     });

                cout << "Enter Student ID to search: ";
                cin >> key;

                {
                    int result = binarySearch(students, n, key);
                    if (result != -1)
                        cout << "Student Found: "
                             << students[result].name << "\n";
                    else
                        cout << "Student Not Found\n";
                }
                break;

            case 4:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    delete[] students;

    return 0;
}
