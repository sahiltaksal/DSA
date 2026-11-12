# Practical 7: Campus Graph Representation and Minimum Spanning Tree Using Kruskal's Algorithm

## Aim

To represent a college campus graph using an adjacency matrix, where departments are vertices and distances between them are edges, and find the Minimum Spanning Tree (MST) using Kruskal's algorithm.

## 1. Introduction

A graph consists of vertices and edges. In this practical:
- Vertices represent college departments.
- Edges represent distances between departments.
- An adjacency matrix stores the distances.
- Kruskal's algorithm finds the Minimum Spanning Tree with minimum total distance.

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

**How to enter the matrix in the program:**

```text
0 10 6 5
10 0 15 0
6 15 0 4
5 0 4 0
```

- `0` on the diagonal means distance from a department to itself.
- `0` elsewhere means there is no direct connection.
- Other numbers represent distances in metres.
- Enter a symmetric matrix because the campus graph is undirected.

## 3. Kruskal's Algorithm

1. Sort all edges in increasing order of weight.
2. Select the edge with the smallest weight.
3. Check whether adding the edge creates a cycle.
4. If it does not create a cycle, include it in the MST.
5. Repeat until `V - 1` edges are selected.

## 4. Sample Output

```text
Minimum Spanning Tree:
ENTC - MECH : 4 m
CS - MECH : 5 m
CS - IT : 10 m

Total Minimum Distance: 19 m
```

## 5. Time and Space Complexity

- Sorting edges: O(E log E)
- Finding connected components: nearly O(1) amortized per operation using path compression.
- Overall Time Complexity: O(E log E)
- Space Complexity: O(V² + E), including the adjacency matrix and edge list.

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

Successfully represented a college campus graph using an adjacency matrix and found its Minimum Spanning Tree using Kruskal's algorithm.