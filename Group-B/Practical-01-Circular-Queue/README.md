# Group B – Practical 1: Implementation of Circular Queue Using Array

## Aim

To implement a Circular Queue using an array and perform the following operations:
1. Insertion (Enqueue)
2. Deletion (Dequeue)
3. Display

## 1. Introduction

A Circular Queue is a linear data structure that follows the FIFO (First In, First Out) principle.

Unlike a normal queue, the last position is connected back to the first position. This allows unused array spaces to be reused.

## 2. Operations

- **Enqueue:** Inserts an element at the rear of the queue.
- **Dequeue:** Removes an element from the front of the queue.
- **Display:** Displays all elements in the queue.
- **Overflow:** Occurs when the queue is full.
- **Underflow:** Occurs when the queue is empty.

## 3. Working of Circular Queue

The queue uses two variables:
- `front` – Points to the first element.
- `rear` – Points to the last element.

Circular movement is performed using modulo (`%`) to reuse available array positions.

## 4. Sample Output

```text
1. Enqueue
2. Dequeue
3. Display
4. Exit

Enter choice: 1
Enter value: 10
10 inserted.

Enter choice: 1
Enter value: 20
20 inserted.

Enter choice: 3
Queue: 10 20

Enter choice: 2
10 deleted.

Enter choice: 3
Queue: 20
```

## 5. Time and Space Complexity

| Operation | Time Complexity |
|---|---|
| Enqueue | O(1) |
| Dequeue | O(1) |
| Display | O(n) |

**Space Complexity:** O(n), where n is the queue capacity.

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

Successfully implemented a Circular Queue using an array and performed Enqueue, Dequeue, and Display operations.