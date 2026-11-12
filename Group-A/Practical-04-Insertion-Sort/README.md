# Practical 4: Student Database Using Dynamic Memory Allocation and Insertion Sort

## Aim

To design and implement a C++ program to maintain a student database by adding and storing student details (ID, Name, CGPA) using dynamically allocated memory, expanding the student list using `realloc()` as new entries are added, and implementing Insertion Sort to sort student records alphabetically by name and by CGPA in ascending and descending order. Selection Sort is also implemented as a second sorting algorithm.

## 1. Introduction

This program maintains student records containing ID, Name and CGPA. It allows users to add new student details, display records and sort student information using different sorting algorithms.

## 2. Concepts Used

### A. Structure (`struct`)

A structure groups different data types into a single record.

Each student record contains:
- `id`: Student identification number.
- `name`: Student name.
- `cgpa`: Student academic score.

### B. Dynamic Memory Allocation

Dynamic memory allocation allows memory to be allocated during program execution.

- `realloc()`: Expands the allocated memory when a new student is added.
- `free()`: Releases the allocated memory after program execution.

The program uses a pointer to manage the dynamically allocated student array.

### C. Insertion Sort

Insertion Sort takes one element at a time and inserts it into its correct position in the already sorted portion of the array.

In this program, Insertion Sort is used for:

1. **Name (A–Z):** Arranges student names alphabetically.
2. **CGPA (Ascending):** Arranges CGPA from lowest to highest.
3. **CGPA (Descending):** Arranges CGPA from highest to lowest.

### D. Selection Sort

Selection Sort repeatedly finds the smallest element from the unsorted portion and places it in its correct position.

In this program, Selection Sort is used to arrange student records by ID in ascending order.

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
| Insertion Sort | O(n) | O(n²) | O(n²) |
| Selection Sort | O(n²) | O(n²) | O(n²) |
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

Successfully implemented a student database using dynamic memory allocation in C++. The program uses `realloc()` to expand the student list, Insertion Sort to arrange student records by name and CGPA, and Selection Sort to arrange records by student ID.