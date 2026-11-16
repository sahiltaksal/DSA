# Practical 4 – Sort Online Orders Using Merge Sort

## Aim
To design and implement the Merge Sort algorithm to sort online orders according to their estimated delivery time in minutes, arranging orders in ascending order so that quicker deliveries are prioritized first.

## Introduction
Merge Sort is a sorting algorithm based on the Divide and Conquer technique. It divides an array into smaller parts, sorts them individually, and merges them to produce a sorted array.

In this practical, Merge Sort is used to arrange online orders based on their estimated delivery times, from shortest to longest.

## Algorithm
1. Start the program.
2. Read the number of online orders.
3. Enter the estimated delivery time for each order.
4. Divide the array into two halves.
5. Recursively sort both halves.
6. Merge the two sorted halves into one sorted array.
7. Display the sorted delivery times in ascending order.
8. Stop the program.

## Sample Input
```text
Enter number of orders: 6
Enter delivery times in minutes:
45 20 60 10 35 15
```

## Sample Output
```text
Sorted delivery times:
10 15 20 35 45 60
```

## Concepts Used
- Divide and Conquer
- Recursion
- Arrays
- Sorting
- Merging of sorted arrays

## Time and Space Complexity

| Case | Complexity |
|---|---|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n log n) |
| Auxiliary Space | O(n) |

## Features
- Sorts delivery times in ascending order.
- Prioritizes quicker deliveries first.
- Uses the Merge Sort algorithm.
- Handles multiple online orders.
- Uses recursion to divide and sort the array.

## Compilation and Execution

### Windows (PowerShell)
```powershell
g++ -std=c++17 -Wall -Wextra main.cpp -o practical.exe
.\practical.exe
```

## Conclusion
The Merge Sort algorithm is successfully implemented in C++ to sort online orders according to their estimated delivery times. It uses the Divide and Conquer technique and provides O(n log n) time complexity in the best, average, and worst cases.
