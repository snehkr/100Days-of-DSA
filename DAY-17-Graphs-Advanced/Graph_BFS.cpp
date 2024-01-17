#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Breadth-First Search (BFS)
void bfs(int startNode, const vector<vector<int>> &graph)
{
  int numNodes = graph.size();
  vector<bool> visited(numNodes, false);
  queue<int> q;

  // Enqueue the starting node
  q.push(startNode);
  visited[startNode] = true;

  while (!q.empty())
  {
    // Dequeue a node and process it
    int current = q.front();
    q.pop();

    // Process the current node
    cout << current << " ";

    // Enqueue unvisited neighbors
    for (int neighbor : graph[current])
    {
      if (!visited[neighbor])
      {
        q.push(neighbor);
        visited[neighbor] = true;
      }
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

  cout << "BFS Traversal: ";
  bfs(0, graph);
  cout << endl;

  return 0;
}
