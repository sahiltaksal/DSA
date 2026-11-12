# Practical 8: Campus Graph Representation and Minimum Spanning Tree Using Prim's Algorithm

## Aim

To represent a college campus graph using an adjacency matrix, where nodes represent departments and edges represent distances between them, and find the Minimum Spanning Tree (MST) using Prim's algorithm.

## 1. Introduction

A graph consists of vertices and edges. In this practical:
- Vertices represent college departments.
- Edges represent distances between departments.
- An adjacency matrix stores the distances.
- Prim's algorithm finds the Minimum Spanning Tree with minimum total distance.

## 2. Adjacency Matrix

An adjacency matrix is a table that stores distances between departments.

Example departments:
- CS – Computer Science
- IT – Information Technology
- ENTC – Electronics
- MECH – Mechanical

### Example Matrix (Distances in metres)

| From / To | CS | IT | ENTC | MECH |
|---|---:|---:|---:|---:|
| CS | 0 | 10 | 6 | 5 |
| IT | 10 | 0 | 15 | 0 |
| ENTC | 6 | 15 | 0 | 4 |
| MECH | 5 | 0 | 4 | 0 |

### How to enter the matrix

Enter these four rows in the program:

```text
0 10 6 5
10 0 15 0
6 15 0 4
5 0 4 0
```

- `0` on the diagonal represents the distance from a department to itself.
- `0` elsewhere means no direct connection.
- Other numbers represent distances in metres.
- Enter a symmetric matrix because the campus graph is undirected.

## 3. Prim's Algorithm

1. Start from any vertex.
2. Select the smallest edge connecting a visited vertex to an unvisited vertex.
3. Add that edge to the Minimum Spanning Tree.
4. Mark the new vertex as visited.
5. Repeat until all vertices are connected.

## 4. Sample Output

```text
Minimum Spanning Tree:
CS - MECH : 5 m
MECH - ENTC : 4 m
CS - IT : 10 m

Total Minimum Distance: 19 m
```

## 5. Time and Space Complexity

- **Time Complexity:** O(V²), using an adjacency matrix.
- **Space Complexity:** O(V²), for storing the adjacency matrix.

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

Successfully represented a college campus graph using an adjacency matrix and found its Minimum Spanning Tree using Prim's algorithm.