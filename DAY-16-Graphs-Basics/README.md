## 📅 TRACK DAYS: 16 of 30

## `✅ Day 16 : Graphs - Basics`

</br>

## 📑 Contents :

- Data Structures and Algorithms
  - `Graphs : Basics`
    - Definition
    - Types

</br>

### 📊 Graphs - Definitions :-

- **Graph :**

  - A graph is a collection of nodes (vertices) and edges that connect pairs of nodes.

  - The edges may have a direction (directed) or not (undirected).

  - Graphs are used to represent relationships and connections between entities.

- **Vertex (Node) :**

  - An individual data point in a graph.

- **Edge :**

  - A connection between two vertices. Edges may have a direction in a directed graph and may have weights.

### 📊 Types of Graphs :-

- **Directed Graph (DiGraph) :**

  - Edges have a direction.

  - If there is an edge from A to B, it does not necessarily mean there is an edge from B to A.

- **Undirected Graph :**

  - Edges have no direction.

  - If there is an edge between A and B, it implies there is also an edge between B and A.

- **Weighted Graph :**

  - Edges have weights or costs associated with them.

- **Cyclic Graph :**

  - Contains a cycle, i.e., a path that starts and ends at the same vertex.

- **Acyclic Graph :**

  - Does not contain any cycles.

### 📊 Graphs Representation :-

- **Adjacency Matrix :**

  ```cpp
  #include <iostream>
  #include <vector>

  using namespace std;

  const int MAX = 100;
  int adjMatrix[MAX][MAX];

  // Function to add an edge to the adjacency matrix
  void addEdge(int u, int v) {
      adjMatrix[u][v] = 1;
      adjMatrix[v][u] = 1; // For undirected graphs
  }

  ```

- **Adjacency List :**

  ```cpp
    #include <iostream>
    #include <vector>

    using namespace std;

    vector<int> adjList[MAX];

    // Function to add an edge to the adjacency list
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // For undirected graphs
    }

  ```

</br></br>

<h4 align="center">
  © 30 DAYS OF DSA [ 2024-25 ] </br>
  ALL RIGHTS RESERVED
</h4>

<p align="center">
  HAPPY LEARNING !!</br>
  DEVELOPED WITH ❤️ BY SNEH KR 
</p>
