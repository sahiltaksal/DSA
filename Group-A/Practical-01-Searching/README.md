# Practical 1: Student Database Using Dynamic Memory Allocation, Linear Search and Binary Search

## Aim
To implement a student database using dynamic memory allocation and perform Linear Search and Binary Search to find student records using their IDs.

## 1. Introduction
This program creates a student database that stores student ID, name and CGPA. It allows users to display student records and search for a particular student using Linear Search or Binary Search.

## 2. Concepts Used

### A. Structure (`struct`)
A structure is a user-defined data type used to group different types of data under one name.

```cpp
struct Student {
    int id;
    string name;
    float cgpa;
};
```

Each student record contains:
- `id`: Unique student identification number.
- `name`: Student's name.
- `cgpa`: Student's academic performance.

### B. Dynamic Memory Allocation
Dynamic memory allocation allows memory to be allocated during program execution according to the number of students entered by the user.

```cpp
Student* students = new Student[n];
```

- `new` allocates memory for `n` student records.
- `students` is a pointer that stores the address of the allocated memory.

```cpp
delete[] students;
```

`delete[]` releases the dynamically allocated memory after the program finishes.

### C. Linear Search
Linear Search is a searching technique that checks each element one by one until the required element is found.

**Working:**
1. Start from the first student record.
2. Compare the student's ID with the search ID.
3. If both IDs match, return the student's index.
4. Otherwise, move to the next record.
5. If no match is found, return `-1`.

**Time Complexity:** O(n)

### D. Binary Search
Binary Search is an efficient searching technique that repeatedly divides the search range into two halves.

**Important:** Binary Search requires the student IDs to be sorted.

This program sorts the student records by ID using:

```cpp
sort(students, students + n,
     [](Student a, Student b) {
         return a.id < b.id;
     });
```

**Working:**
1. Set `low = 0` and `high = n - 1`.
2. Calculate the middle index.
3. Compare the middle student's ID with the search ID.
4. If they match, return the index.
5. If the search ID is greater, search the right half.
6. Otherwise, search the left half.
7. Repeat until the ID is found or the search range becomes empty.

**Time Complexity:** O(log n) after sorting.

## 3. Program Operations

The program displays a menu with four options:

1. **Display Students:** Displays all student records with their ID, name and CGPA.
2. **Linear Search:** Searches for a student by checking IDs one by one.
3. **Binary Search:** Sorts student records by ID and searches using Binary Search.
4. **Exit:** Terminates the program and releases allocated memory.

## 4. Compilation and Execution

### Windows (VS Code / PowerShell)

```bash
g++ -std=c++17 main.cpp -o practical.exe
.\practical.exe
```

### Ubuntu / Linux

```bash
g++ -std=c++17 main.cpp -o practical
./practical
```

## 5. Time Complexity

| Operation | Time Complexity |
|---|---|
| Display Students | O(n) |
| Linear Search | O(n) |
| Sorting | O(n log n) |
| Binary Search | O(log n) |

**Space Complexity:** O(n) for storing student records.

## 6. Conclusion
The student database was successfully implemented in C++. Dynamic memory allocation was used to store student records. Linear Search and Binary Search were implemented to search for student IDs. The program demonstrates how sorting improves searching efficiency when using Binary Search.