 # Tarjans-Algorithm-Finding-Strongly-Connected-Components

This code snippet demonstrates an efficient implementation of **Tarjan's Algorithm** in C++ to find **Strongly Connected Components (SCCs)** in a directed graph using **Depth-First Search (DFS)** and the **Low-Link Value** technique.

## Supports :

- Finding all Strongly Connected Components (SCCs)
- DFS-based graph traversal
- Low-Link Value computation
- Stack-based SCC detection
- Efficient processing of directed graphs

## Features :

- Finds all SCCs in a single DFS traversal
- Uses discovery time and low-link values
- Stack-based implementation for efficient component extraction
- No need to reverse the graph
- Simple, optimized, and easy-to-understand C++ implementation

## How It Works :

1. Initialize discovery time and low-link arrays.
2. Perform DFS from every unvisited vertex.
3. Push each visited vertex onto a stack.
4. Update low-link values while exploring adjacent vertices.
5. When a vertex's discovery time equals its low-link value, it is the root of an SCC.
6. Pop vertices from the stack until the root is reached to form one Strongly Connected Component.
7. Repeat until all vertices have been processed.

## Time & Space Complexity :

**Time Complexity:** O(V + E)

**Space Complexity:** O(V)

where:
- **V** = Number of vertices
- **E** = Number of edges

## Use Cases :

- Competitive Programming (Graph Algorithms)
- Network Connectivity Analysis
- Dependency Graph Analysis
- Compiler Design
- Social Network Analysis
- Deadlock Detection in Operating Systems
- Software Package Dependency Resolution

## How to Run :

Download the repository (extract the folder if needed), then open the project folder in the terminal (install a C++ compiler if needed), compile the program, and run the executable file. After running, enter the number of vertices, number of directed edges, and the list of edges to display all the Strongly Connected Components in the graph.
