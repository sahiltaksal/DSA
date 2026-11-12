# Practical 6: Implementation of Stack ADT Using Singly Linked List for Infix to Prefix Conversion

## Aim

To implement a Stack as an Abstract Data Type (ADT) using a Singly Linked List and use this stack to convert an infix expression into a prefix expression.

## 1. Introduction

This program converts an infix expression into a prefix expression using a stack implemented with a singly linked list.

## 2. Concepts Used

### A. Stack ADT

A stack follows the LIFO (Last In, First Out) principle.

Stack operations:
- **Push:** Inserts an element into the stack.
- **Pop:** Removes the top element.
- **Peek:** Returns the top element.
- **isEmpty:** Checks whether the stack is empty.

### B. Singly Linked List

Each node stores a character and a pointer to the next node. The top pointer keeps track of the stack's first node.

### C. Infix to Prefix Conversion

- Reverse the infix expression.
- Swap opening and closing parentheses.
- Convert the modified expression into postfix.
- Reverse the postfix expression to obtain the prefix expression.

## 3. Example

**Input:**
```text
A+B*C
```

**Output:**
```text
+A*BC
```

## 4. Operator Precedence

| Operator | Precedence |
|---|---|
| ^ | Highest |
| * / | Medium |
| + - | Lowest |

## 5. Time and Space Complexity

| Operation | Complexity |
|---|---|
| Push | O(1) |
| Pop | O(1) |
| Peek | O(1) |
| Infix to Prefix Conversion | O(n) |

**Space Complexity:** O(n), where n is the expression length.

## 6. Compilation and Execution

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

## 7. Conclusion

Successfully implemented a Stack ADT using a Singly Linked List and used it to convert infix expressions into prefix expressions.