# Group B – Practical 2: Implementation of Binary Search Tree (BST)

## Aim

To implement a Binary Search Tree (BST) and perform Insert, Delete, Search, Tree Traversals, Depth Calculation, Mirror Image, Copy, Parent-Child Display, Leaf Node Display, and Level-wise Display operations.

## 1. Introduction

A Binary Search Tree is a non-linear data structure in which each node contains a value and has at most two children.

- Left subtree contains smaller values.
- Right subtree contains greater values.
- Duplicate values are not allowed.

## 2. Operations Performed

| Operation | Description |
|---|---|
| Insert | Adds a new node to the BST. |
| Delete | Removes a node from the BST. |
| Search | Searches for a given value. |
| Inorder | Displays Left, Root, Right. |
| Preorder | Displays Root, Left, Right. |
| Postorder | Displays Left, Right, Root. |
| Depth | Displays the maximum number of levels. |
| Mirror | Creates and displays the mirror image of the tree. |
| Copy | Creates and displays a copy of the tree. |
| Parent-Child | Displays parent nodes with their children. |
| Leaf Nodes | Displays nodes having no children. |
| Level-wise | Displays nodes level by level. |

## 3. Example BST

Insert the following values:

```text
50, 30, 70, 20, 40, 60, 80
```

Tree representation:

```text
          50
         /  \
       30    70
      / \    / \
    20  40  60  80
```

## 4. Sample Output

**Inorder Traversal:**
```text
20 30 40 50 60 70 80
```

**Level-wise Display:**
```text
50
30 70
20 40 60 80
```

**Depth of Tree:**
```text
3
```

**Leaf Nodes:**
```text
20 40 60 80
```

## 5. Time Complexity

| Operation | Average Case | Worst Case |
|---|---|---|
| Insert | O(log n) | O(n) |
| Delete | O(log n) | O(n) |
| Search | O(log n) | O(n) |
| Traversal | O(n) | O(n) |
| Depth | O(n) | O(n) |
| Copy / Mirror | O(n) | O(n) |

## 6. Compilation and Execution

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

## 7. Conclusion

Successfully implemented a Binary Search Tree and performed insertion, deletion, searching, traversal, depth calculation, mirror image, copying, parent-child display, leaf node display, and level-wise display operations.