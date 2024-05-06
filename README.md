This project was implemented as part of Assignment 3 of Advanced Data Structures and Algorithms (CS5800), 2024 at Indian Institute of Technology, Madras.

# Requirements

The C++ source requires g++, clang or an equivalent compiler and is platform independent. This project has been developed and tested on GNU Linux (5.15.133.1-microsoft-standard-WSL2) and the rest of this document assumes it is being run on a modern Linux distribution.

`cmake` is required to run `make`.

# Quick Start

Run `make dijkstra` to generate the binary `./bin/dijkstra`.

`dijkstra` implements a solution to the problem given below using Dijkstra's Single-source Shortest Path algorithm.

# Problem Statement

The following problem statement has been used to demonstrate this project's implementation of Dijkstra's SSSP algorithm.

## Shortest Distances

### Statement

Find the minimum distances from a given source node to every node in the given weighted directed graph.

### Input Format

The first line of input contains two space-separated integers **n** and **m**, where **n** represents the number of nodes in the graph, or rather, the index of the maximum numbered node, and **m** represents the number of edges.

The following **m** lines each contain three space-separated integers **u_i, v_i, w_i** denoting an edge connecting **u_i** to **v_i** with the weight **w_i**. The nodes are 1-indexed.

Finally, the last line contains a single integer **s**, representing the source node.

### Output Format

Print **n** space-separated integers on a single line: where the i-th integer denotes the shortest distance from the node **s** to the node **i+1**. If there exists no path from the node **s** to another node, output -1 as the distance, representing infinity.

### Constraints

0 ≤ **n, m** ≤ 10⁷

1 ≤ **u_i, v_i** ≤ **n**

0 ≤ **w_i** ≤ 10⁹

### Sample Input
```
3 3
1 2 4
1 3 7
2 3 1
1
```

### Sample Output
```
0 4 5
```

# Notes

This implementation uses a custom input/output library for better performance.
