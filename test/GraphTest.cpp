// Test/GraphTest.cpp
#include "src/Graph.h"
#include <gtest/gtest.h>

TEST(GraphTest, DijkstraBasicTest) {
    Graph graph;
    graph.addEdge(0, 1, 4);
    graph.addEdge(0, 2, 1);
    graph.addEdge(2, 1, 2);
    graph.addEdge(1, 3, 1);
    graph.addEdge(2, 3, 5);

    std::vector<int> dist = graph.dijkstra(0, 4);
    EXPECT_EQ(dist[0], 0);
    EXPECT_EQ(dist[1], 3);
    EXPECT_EQ(dist[2], 1);
    EXPECT_EQ(dist[3], 4);
}