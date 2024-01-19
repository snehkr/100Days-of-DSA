#include <iostream>
#include <vector>
#include <climits>

using namespace std;

#define INF INT_MAX

class Graph 
{
public:
  int vertices;
  vector<vector<pair<int, int>>> edges;

  Graph(int v)
  {
    vertices = v;
    edges.resize(v);
  }

  void addEdge(int u, int v, int weight)
  {
    edges[u].push_back({v, weight});
  }

  void bellmanFord(int source)
  {
    vector<int> distance(vertices, INF);
    distance[source] = 0;

    for (int i = 1; i <= vertices - 1; ++i)
    {
      for (int u = 0; u < vertices; ++u)
      {
        for (const auto &neighbor : edges[u])
        {
          int v = neighbor.first;
          int weight = neighbor.second;

          if (distance[u] != INF && distance[u] + weight < distance[v])
          {
            distance[v] = distance[u] + weight;
          }
        }
      }
    }

    // Check for negative weight cycles
    for (int u = 0; u < vertices; ++u)
    {
      for (const auto &neighbor : edges[u])
      {
        int v = neighbor.first;
        int weight = neighbor.second;

        if (distance[u] != INF && distance[u] + weight < distance[v])
        {
          cout << "Graph contains negative weight cycle!\n";
          return;
        }
      }
    }

    cout << "Shortest distances from source " << source << ":\n";
    for (int i = 0; i < vertices; ++i)
    {
      cout << "To vertex " << i << ": " << distance[i] << "\n";
    }
  }
};

int main()
{
  int vertices = 5;
  Graph graph(vertices);

  graph.addEdge(0, 1, -1);
  graph.addEdge(0, 2, 4);
  graph.addEdge(1, 2, 3);
  graph.addEdge(1, 3, 2);
  graph.addEdge(1, 4, 2);
  graph.addEdge(3, 2, 5);
  graph.addEdge(3, 1, 1);
  graph.addEdge(4, 3, -3);

  int source = 0;
  graph.bellmanFord(source);

  return 0;
}
