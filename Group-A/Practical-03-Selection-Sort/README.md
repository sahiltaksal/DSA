# Practical 3: Student Database Using Dynamic Memory Allocation and Selection Sort

## Aim

To design and implement a C++ program to maintain a student database by adding and storing student details (ID, Name, CGPA) using dynamically allocated memory, expanding the student list using `realloc()` as new entries are added, and implementing Selection Sort to sort student records alphabetically by name and by CGPA in ascending and descending order. Insertion Sort is also implemented as a second sorting algorithm.

## 1. Introduction

This program maintains student records containing ID, Name and CGPA. It allows users to add new students, display records and sort student information using different sorting algorithms.

## 2. Concepts Used

### A. Structure (`struct`)

A structure groups different data types into one record.

Each student record contains:
- `id`: Student identification number.
- `name`: Student name.
- `cgpa`: Student academic score.

### B. Dynamic Memory Allocation

Dynamic memory allocation allows memory to be allocated during program execution.

- `realloc()`: Expands the allocated memory when a new student is added.
- `free()`: Releases the allocated memory after program execution.

The program uses a pointer to manage the dynamically allocated student array.

### C. Selection Sort

Selection Sort repeatedly finds the smallest or largest element from the unsorted portion and places it in the correct position.

In this program, Selection Sort is used for:

1. **Name (A–Z):** Sorts student names alphabetically.
2. **CGPA (Ascending):** Sorts CGPA from lowest to highest.
3. **CGPA (Descending):** Sorts CGPA from highest to lowest.

### D. Insertion Sort

Insertion Sort builds a sorted portion of the array by inserting each element into its correct position.

In this program, Insertion Sort is used to arrange student records by ID in ascending order.

## 3. Menu Operations

1. Add Student
2. Display Students
3. Sort by Name (A–Z)
4. Sort by CGPA (Ascending)
5. Sort by CGPA (Descending)
6. Sort by Student ID
7. Exit

## 4. Time Complexity

| Algorithm / Operation | Best Case | Average Case | Worst Case |
|---|---|---|---|
| Selection Sort | O(n²) | O(n²) | O(n²) |
| Insertion Sort | O(n) | O(n²) | O(n²) |
| Adding a Student | O(n) | O(n) | O(n) |

**Space Complexity:** O(n) for storing student records.

## 5. Compilation and Execution

### Windows (VS Code / PowerShell)

```bash
g++ -std=c++17 -Wall -Wextra main.cpp -o practical.exe
.\practical.exe
```

### Ubuntu / Linux

```bash
g++ -std=c++17 -Wall -Wextra main.cpp -o practical
./practical
```

## 6. Conclusion

Successfully implemented a student database using dynamic memory allocation in C++. The program uses `realloc()` to expand the student list and Selection Sort to arrange student records by name and CGPA. Insertion Sort is also implemented to sort records by student ID.