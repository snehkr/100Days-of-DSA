#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

#define INF INT_MAX

typedef pair<int, int> pii;

class Graph
{
public:
  int vertices;
  vector<vector<pii>> adjacencyList;

  Graph(int v)
  {
    vertices = v;
    adjacencyList.resize(v);
  }

  void addEdge(int u, int v, int weight)
  {
    adjacencyList[u].push_back({v, weight});
    adjacencyList[v].push_back({u, weight});
  }

  void dijkstra(int source)
  {
    vector<int> distance(vertices, INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    distance[source] = 0;
    pq.push({0, source});

    while (!pq.empty())
    {
      int u = pq.top().second;
      pq.pop();

      for (const auto &neighbor : adjacencyList[u])
      {
        int v = neighbor.first;
        int weight = neighbor.second;

        if (distance[u] + weight < distance[v])
        {
          distance[v] = distance[u] + weight;
          pq.push({distance[v], v});
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
  int vertices = 6;
  Graph graph(vertices);

  graph.addEdge(0, 1, 2);
  graph.addEdge(0, 2, 4);
  graph.addEdge(1, 2, 1);
  graph.addEdge(1, 3, 7);
  graph.addEdge(2, 4, 3);
  graph.addEdge(3, 4, 1);
  graph.addEdge(3, 5, 5);
  graph.addEdge(4, 5, 2);

  int source = 0;
  graph.dijkstra(source);

  return 0;
}
