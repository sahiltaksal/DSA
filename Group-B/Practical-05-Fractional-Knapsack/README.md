# Practical 5 – Fractional Knapsack

## Aim
To design and implement the Fractional Knapsack algorithm using the Greedy Strategy to maximize the total profit by selecting parcels, including partial parcels, according to their weights and profits within the truck's limited weight capacity.

## Introduction
The Fractional Knapsack problem is a Greedy Algorithm problem in which items can be selected completely or partially.

In this practical, a shipping truck has limited weight capacity. Each parcel has a weight and profit. The objective is to maximize total profit by selecting parcels with the highest profit-to-weight ratio first.

## Algorithm
1. Read the number of parcels.
2. Enter the weight and profit of each parcel.
3. Calculate the profit-to-weight ratio for every parcel.
4. Sort parcels in descending order of their ratio.
5. Select parcels with the highest ratio first.
6. If a parcel does not fit completely, select the fraction that fits in the remaining capacity.
7. Calculate and display the maximum total profit.

## Sample Input
```text
Enter number of parcels: 3
Enter weight and profit of parcel 1: 10 60
Enter weight and profit of parcel 2: 20 100
Enter weight and profit of parcel 3: 30 120
Enter truck capacity: 50
```

## Sample Output
```text
Selected Parcels:
Weight: 10, Profit: 60, Fraction: 100%
Weight: 20, Profit: 100, Fraction: 100%
Weight: 20, Profit: 80, Fraction: 66.6667%

Maximum Profit: 240
```

## Concepts Used
- Greedy Algorithm
- Fractional Knapsack
- Profit-to-weight ratio
- Sorting
- Dynamic memory allocation

## Time and Space Complexity

| Operation | Complexity |
|---|---|
| Calculate ratios | O(n) |
| Sort parcels | O(n log n) |
| Select parcels | O(n) |
| Total Time | O(n log n) |
| Auxiliary Space | O(n) |

## Features
- Maximizes total parcel profit.
- Allows partial selection of parcels.
- Selects parcels based on profit-to-weight ratio.
- Checks for invalid parcel weights and profits.
- Respects the truck's maximum weight capacity.

## Compilation and Execution

### Windows (PowerShell)
```powershell
g++ -std=c++17 -Wall -Wextra main.cpp -o practical.exe
.\practical.exe
```

## Conclusion
The Fractional Knapsack algorithm successfully maximizes shipping profit using the Greedy Strategy. By selecting parcels according to their profit-to-weight ratio and allowing partial selection, it provides an efficient solution with O(n log n) time complexity.