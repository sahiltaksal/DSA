# Practical 2: Student Database Using Dynamic Memory Allocation and Bubble Sort

## Aim
To create a student database using dynamic memory allocation and sort student records by name and CGPA using Bubble Sort.

## 1. Introduction
This program stores student details such as ID, name and CGPA. It allows users to add new students, display records and sort student information in different orders.

## 2. Concepts Used

### A. Structure (`struct`)
A structure groups different types of data into a single record.

Each student contains:
- `id`: Student identification number.
- `name`: Student name.
- `cgpa`: Student academic score.

### B. Dynamic Memory Allocation
Dynamic memory allocation allows memory to be allocated during program execution.

- `new[]`: Allocates memory for student records.
- `delete[]`: Releases the allocated memory.
- When a new student is added, a larger array is created and existing records are copied into it.

### C. Bubble Sort
Bubble Sort is a sorting algorithm that repeatedly compares adjacent elements and swaps them when they are in the wrong order.

**Working:**
1. Compare two adjacent student records.
2. Swap them if they are in the wrong order.
3. Continue until the end of the array.
4. Repeat the passes until all records are sorted.

### D. Sorting Operations

1. **Name (A–Z):** Arranges student names alphabetically.
2. **CGPA (Ascending):** Arranges CGPA from lowest to highest.
3. **CGPA (Descending):** Arranges CGPA from highest to lowest.

The complete student records are swapped so that IDs, names and CGPA remain together.

## 3. Menu Operations
1. Add Student
2. Display Students
3. Sort by Name (A–Z)
4. Sort by CGPA (Ascending)
5. Sort by CGPA (Descending)
6. Exit

## 4. Time and Space Complexity

| Operation | Time Complexity |
|---|---|
| Adding a student | O(n) |
| Bubble Sort (Best Case) | O(n²) |
| Bubble Sort (Average Case) | O(n²) |
| Bubble Sort (Worst Case) | O(n²) |

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
Successfully implemented a student database using C++ dynamic memory allocation. Bubble Sort was used to arrange student records alphabetically by name and by CGPA in ascending and descending order.