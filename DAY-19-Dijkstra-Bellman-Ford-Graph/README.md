## 📅 TRACK DAYS: 19 of 30

## `✅ Day 19 : Dijkstra's, Bellman-Ford Graph`

</br>

## 📑 Contents :

- Data Structures and Algorithms
  - Dijkstra's Graph
  - Bellman-Ford Graph

</br>

### 📊 Dijkstra's Algorithm :-

- **Definition :**

  - Dijkstra's algorithm is a popular algorithm for finding the shortest path between nodes in a graph, which may represent, for example, road networks.

  - The algorithm maintains a set of vertices whose shortest distance from the source is known.

- **Advantages :**

  - `Optimal Substructure:`

    - Dijkstra's algorithm provides the shortest paths from the source to all other vertices in a graph with non-negative weights.

  - `Efficiency:`

    - It is more efficient than Bellman-Ford for dense graphs and graphs with non-negative weights.

- **Common Uses :**

  - `Routing Protocols:`

    - Dijkstra's algorithm is commonly used in computer networks for routing packets between devices. It helps in finding the shortest path between two nodes.

  - `Shortest Path in Maps:`

    - Applications such as GPS navigation systems use Dijkstra's algorithm to find the shortest route between two locations on a map.

  - `Network Routing:`

    - Dijkstra's algorithm is used in various network protocols to find the most efficient path for data transmission.

### 📊 Bellman-Ford Algorithm :-

- **Definition :**

  - Bellman-Ford algorithm is used to find the shortest paths from a single source vertex to all other vertices in a weighted graph.

  - It is capable of handling graphs with negative weight edges and can detect negative weight cycles

- **Advantages :**

  - `Handles Negative Weights:`

    - Bellman-Ford algorithm can handle graphs with negative weights, unlike Dijkstra's algorithm.

  - `Detects Negative Cycles:`

    - Bellman-Ford can detect the presence of negative weight cycles in a graph.

- **Common Uses :**

  - `Arbitrary Weighted Graphs:`

    - Bellman-Ford is used when the graph may have negative weight edges, making it suitable for a wider range of scenarios.

  - `Resource Allocation:`

    - In scenarios where resources have associated costs (positive or negative), Bellman-Ford can be applied to find the optimal allocation.

  - `Network Routing with Negative Weights:`

    - In certain situations, such as modeling costs or profits, Bellman-Ford can be used for network routing where negative weights represent profits.

### 📊 Choosing Between Dijkstra's and Bellman-Ford :-

1. Non-Negative Weights:

   - If all edge weights are non-negative, Dijkstra's algorithm is generally preferred due to its efficiency.

2. Negative Weights or Cycles:

   - If the graph contains negative weights or there is a need to detect negative cycles, Bellman-Ford is a suitable choice.

3. Sparse Graphs:

   - Dijkstra's algorithm is often more efficient for sparse graphs, while Bellman-Ford can be used in any case.

</br></br>

<h4 align="center">
  © 30 DAYS OF DSA [ 2024-25 ] </br>
  ALL RIGHTS RESERVED
</h4>

<p align="center">
  HAPPY LEARNING !!</br>
  DEVELOPED WITH ❤️ BY SNEH KR 
</p>
