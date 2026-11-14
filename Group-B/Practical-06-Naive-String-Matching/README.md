# Practical 6 – Naïve String Matching

## Aim
To design and implement the Naïve String Matching Algorithm to find all starting indices in a given text where a substring exactly matches the specified pattern.

## Introduction
Naïve String Matching is a simple pattern-searching algorithm. It checks the pattern at every possible position in the text by comparing characters one by one.

If all characters match, the starting index is displayed. Otherwise, the pattern is shifted one position to the right.

## Algorithm
1. Read the text string and pattern string.
2. Calculate the lengths of the text (n) and pattern (m).
3. Check the pattern at every possible starting position from 0 to n-m.
4. Compare each pattern character with the corresponding text character.
5. If all characters match, display the starting index.
6. If no match is found, display an appropriate message.

## Sample Input
```text
Enter text: ABABCABCAB
Enter pattern: ABC
```

## Sample Output
```text
Pattern found at index: 2
Pattern found at index: 5
```

## Concepts Used
- String Processing
- Naïve String Matching
- Character Comparison
- Pattern Searching
- Zero-based Indexing

## Time and Space Complexity

| Case | Complexity |
|---|---|
| Best Case | O(n) |
| Average Case | O(n × m) |
| Worst Case | O(n × m) |
| Auxiliary Space | O(1) |

Where:
- n = Length of text
- m = Length of pattern

## Features
- Finds all occurrences of a pattern.
- Supports uppercase and lowercase letters.
- Supports digits, spaces, and special characters.
- Handles overlapping pattern matches.
- Uses zero-based indexing.
- Handles empty patterns and patterns longer than the text.

## Compilation and Execution

### Windows (PowerShell)
```powershell
g++ -std=c++17 -Wall -Wextra main.cpp -o practical.exe
.\practical.exe
```

## Conclusion
The Naïve String Matching Algorithm successfully finds all occurrences of a given pattern in a text by comparing characters at every possible position. It is simple to implement and requires O(1) auxiliary space, although its worst-case time complexity is O(n × m).