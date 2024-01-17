#include <iostream>
#include <vector>

using namespace std;

// Depth-First Search (DFS)
void dfs(int node, vector<bool> &visited, const vector<vector<int>> &graph)
{
  // Mark the current node as visited
  visited[node] = true;

  // Process the current node
  cout << node << " ";

  // Recursive DFS for adjacent nodes
  for (int neighbor : graph[node])
  {
    if (!visited[neighbor])
    {
      dfs(neighbor, visited, graph);
    }
  }
}

int main()
{
  // Example graph represented as an adjacency list
  vector<vector<int>> graph = {
      {1, 2},    // Node 0 is connected to nodes 1 and 2
      {0, 3, 4}, // Node 1 is connected to nodes 0, 3, and 4
      {0, 5},    // Node 2 is connected to nodes 0 and 5
      {1},       // Node 3 is connected to node 1
      {1},       // Node 4 is connected to node 1
      {2}        // Node 5 is connected to node 2
  };

  cout << "DFS Traversal: ";
  vector<bool> visitedDFS(graph.size(), false);
  dfs(0, visitedDFS, graph);
  cout << endl;

  return 0;
}
