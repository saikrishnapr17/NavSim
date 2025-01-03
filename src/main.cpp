// main.cpp
#include <iostream>
#include <iomanip>
#include "Graph.h"
#include "MessageSystem.h"

void visualizePath(const std::vector<int> &dist) {
    std::cout << "\nVisualization of Shortest Path Distances from Node 0:\n";
    std::cout << "==============================================\n";
    std::cout << "Node" << std::setw(10) << "Distance" << "\n";
    std::cout << "----------------------------------------------\n";
    for (size_t i = 0; i < dist.size(); ++i) {
        std::cout << std::setw(4) << i << std::setw(10) << dist[i] << "\n";
    }
    std::cout << "==============================================\n";
}

int main() {
    Graph graph;
    graph.addEdge(0, 1, 4);
    graph.addEdge(0, 2, 1);
    graph.addEdge(2, 1, 2);
    graph.addEdge(1, 3, 1);
    graph.addEdge(2, 3, 5);
    graph.addEdge(3, 4, 3);

    std::cout << "Simulation: Finding shortest paths in a city\n";
    std::cout << "Nodes represent intersections; edges represent roads with travel times.\n";

    auto dist = graph.dijkstra(0, 5);

    std::cout << "Shortest distances from node 0 (City Center):\n";
    for (size_t i = 0; i < dist.size(); ++i) {
        std::cout << "Intersection " << i << ": " << dist[i] << "\n";
    }

    visualizePath(dist);

    MessageSystem ms;
    ms.sendMessage("Simulation message: Navigation complete");
    ms.receiveMessage("Acknowledgment: Path visualized");

    return 0;
}