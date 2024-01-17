## 📅 TRACK DAYS: 17 of 30

## `✅ Day 17 : Graphs - Advanced`

</br>

## 📑 Contents :

- Data Structures and Algorithms
  - `Graphs : Advanced`
    - Depth-First Search (DFS)
    - Breadth-First Search (BFS)
      - Definition
      - Syntax

</br>

### 📊 Graphs - Depth-First Search (DFS) :-

- **Definition :**

  - DFS explores as far as possible along each branch before backtracking.

  - It starts at the root node and explores each branch before moving on to the next one.

- **Syntax :**

  ```cpp

  void dfs(int node, vector<bool>& visited, vector<vector<int>>& graph) {
      // Mark the current node as visited
      visited[node] = true;

      // Process the current node

      // Recursive DFS for adjacent nodes
      for (int neighbor : graph[node]) {
          if (!visited[neighbor]) {
              dfs(neighbor, visited, graph);
          }
      }
  }

  // Call DFS from the starting node
  void dfsTraversal(int startNode, vector<vector<int>>& graph) {
      int numNodes = graph.size();
      vector<bool> visited(numNodes, false);

      dfs(startNode, visited, graph);
  }


  ```

### 📊 Graphs - Breadth-First Search (BFS) :-

- **Definition :**

  - BFS explores all the nodes at the current depth before moving on to the nodes at the next depth.

  - It starts at the root node and explores its neighbors before moving on to their neighbors.

- **Syntax :**

  ```cpp

  #include <queue>

  void bfs(int startNode, vector<vector<int>>& graph) {
      int numNodes = graph.size();
      vector<bool> visited(numNodes, false);
      queue<int> q;

      // Enqueue the starting node
      q.push(startNode);
      visited[startNode] = true;

      while (!q.empty()) {
          // Dequeue a node and process it
          int current = q.front();
          q.pop();

          // Process the current node

          // Enqueue unvisited neighbors
          for (int neighbor : graph[current]) {
              if (!visited[neighbor]) {
                  q.push(neighbor);
                  visited[neighbor] = true;
              }
          }
      }
  }

  // Call BFS from the starting node
  void bfsTraversal(int startNode, vector<vector<int>>& graph) {
      bfs(startNode, graph);
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
