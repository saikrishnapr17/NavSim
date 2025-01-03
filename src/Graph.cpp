// Graph.cpp
#include "Graph.h"
#include <queue>

#define INF std::numeric_limits<int>::max()

void Graph::addEdge(int u, int v, int weight) {
    adj[u].emplace_back(v, weight);
    adj[v].emplace_back(u, weight);
}

std::vector<int> Graph::dijkstra(int src, int nodes) {
    std::vector<int> dist(nodes, INF);
    dist[src] = 0;

    using pii = std::pair<int, int>;
    std::priority_queue<pii, std::vector<pii>, std::greater<>> pq;
    pq.emplace(0, src);

    while (!pq.empty()) {
        int currDist = pq.top().first;
        int currNode = pq.top().second;
        pq.pop();

        if (currDist > dist[currNode]) continue;

        for (auto &[neighbor, weight] : adj[currNode]) {
            if (dist[currNode] + weight < dist[neighbor]) {
                dist[neighbor] = dist[currNode] + weight;
                pq.emplace(dist[neighbor], neighbor);
            }
        }
    }

    return dist;
}
