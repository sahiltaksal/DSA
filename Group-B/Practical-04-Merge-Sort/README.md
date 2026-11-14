# Practical 4 – Sort Online Orders Using Merge Sort

## Aim
To design and implement the Merge Sort algorithm to sort online orders according to their estimated delivery time in minutes, arranging orders in ascending order so that quicker deliveries are prioritized first.

## Introduction
Merge Sort is a divide-and-conquer sorting algorithm. It divides an array into smaller parts, sorts those parts individually, and merges them to produce a sorted array.

In this practical, Merge Sort is used to arrange online orders based on their estimated delivery times, from the shortest delivery time to the longest.

## Algorithm
1. Read the number of online orders.
2. Enter the estimated delivery time for each order.
3. Divide the array into two halves.
4. Recursively sort both halves.
5. Merge the two sorted halves into one sorted array.
6. Display the orders in ascending order of delivery time.

## Sample Input
```text
Enter number of online orders: 6
Enter estimated delivery times (minutes): 45 20 60 15 35 10
```

## Sample Output
```text
Orders sorted by delivery time:
Order 1: 10 minutes
Order 2: 15 minutes
Order 3: 20 minutes
Order 4: 35 minutes
Order 5: 45 minutes
Order 6: 60 minutes
```

## Concepts Used
- Divide and Conquer
- Recursion
- Array
- Merging of sorted arrays
- Dynamic memory allocation

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
- Rejects negative delivery times.

## Compilation and Execution

### Windows (PowerShell)
```powershell
g++ -std=c++17 -Wall -Wextra main.cpp -o practical.exe
.\practical.exe
```

## Conclusion
The Merge Sort algorithm successfully sorts online orders according to their estimated delivery times. It uses the divide-and-conquer technique and provides O(n log n) time complexity in the best, average, and worst cases.