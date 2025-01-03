// Graph.h
#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <unordered_map>
#include <limits>

class Graph {
public:
    void addEdge(int u, int v, int weight);
    std::vector<int> dijkstra(int src, int nodes);

private:
    std::unordered_map<int, std::vector<std::pair<int, int>>> adj;
};

#endif