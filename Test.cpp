// mail - omer7530@gmail.com
// Author - Omer Cohen

#include "doctest.h"
#include "Algorithms.hpp"
#include "Graph.hpp"
#include <stdexcept>

using namespace std;

TEST_CASE("Test isContainsCycle in undirected BIG TREE")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
{0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0}, 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1}, 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0}, 
{1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0}, 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    grp.loadGraph(graph);

    CHECK(ariel::Algorithms::isContainsCycle(grp) == "0");
}

TEST_CASE("Test isConnected in undirected BIG TREE")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
{0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0}, 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1}, 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0}, 
{1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0}, 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    grp.loadGraph(graph);

    CHECK(ariel::Algorithms::isConnected(grp));
}

TEST_CASE("Test isConnected on one node graph")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {{0}};
    grp.loadGraph(graph);

    CHECK(ariel::Algorithms::isConnected(grp));
}

TEST_CASE("Test isContainsCycle undirected graph")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
            {0, 0, 0, 8, 0},
            {0, 0, 8, 8, 0},
            {0, 8, 0, 8, 0},
            {8, 8, 8, 0, 0},
            {0, 0, 0, 0, 0}};
    grp.loadGraph(graph);

    CHECK(ariel::Algorithms::isContainsCycle(grp) == "3->1->2->3");
}

TEST_CASE("Test negative cycle")
{
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, -80, 0},
        {1, 0, 0},
        {0, 1, 0}};
    g.loadGraph(graph);
    CHECK(ariel::Algorithms::shortestPath(g,2,1) == "ERROR: The graph contains a negative-weight cycle.");
}

TEST_CASE("Test shortestPath in clicue k6")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
            {0, 1, 1, 1, 1, 1}, 
            {1, 0, 1, 1, 1, 1},
            {1, 1, 0, 1, 1, 1},
            {1, 1, 1, 0, 1, 1},
            {1, 1, 1, 1, 0, 1},
            {1, 1, 1, 1, 1, 0}};
    grp.loadGraph(graph);

    CHECK(ariel::Algorithms::shortestPath(grp, 0, 5) == "0->5");
}

TEST_CASE("Test isBipartite in clicue k6")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
            {0, 1, 1, 1, 1, 1}, 
            {1, 0, 1, 1, 1, 1},
            {1, 1, 0, 1, 1, 1},
            {1, 1, 1, 0, 1, 1},
            {1, 1, 1, 1, 0, 1},
            {1, 1, 1, 1, 1, 0}};
    grp.loadGraph(graph);

    CHECK(ariel::Algorithms::isBipartite(grp) == "0");
}

TEST_CASE("Test graph with short way but more weight")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
            {0, 1, 0, 0, 80},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 1, 0},
            {0, 0, 0, 0, 1},
            {0, 0, 0, 0, 0}};
    grp.loadGraph(graph);

    CHECK(ariel::Algorithms::shortestPath(grp, 0, 4) == "0->1->2->3->4");
}

TEST_CASE("Test shortestPath with outOfRange start node")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
            {0, 1, 0, 0, 80},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 1, 0},
            {0, 0, 0, 0, 1},
            {0, 0, 0, 0, 0}};
    grp.loadGraph(graph);

    CHECK(ariel::Algorithms::shortestPath(grp, -9098, 4) == "invalid start or end node");
}

TEST_CASE("Test isConnected")
{
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}};
    g.loadGraph(graph);
    CHECK(ariel::Algorithms::isConnected(g) == true);

    vector<vector<int>> graph2 = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph2);
    CHECK(ariel::Algorithms::isConnected(g) == false);
}

TEST_CASE("Test shortestPath")
{
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}};
    g.loadGraph(graph);
    CHECK(ariel::Algorithms::shortestPath(g, 0, 2) == "0->1->2");

    vector<vector<int>> graph2 = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph2);
    CHECK(ariel::Algorithms::shortestPath(g, 0, 4) == "-1");
}

TEST_CASE("Test isContainsCycle")
{
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}};
    g.loadGraph(graph);
    CHECK(ariel::Algorithms::isContainsCycle(g) == "0");

    vector<vector<int>> graph2 = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph2);
    CHECK(ariel::Algorithms::isContainsCycle(g) != "0");
}

TEST_CASE("Test isBipartite")
{
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}};
    g.loadGraph(graph);
    CHECK(ariel::Algorithms::isBipartite(g) == "The graph is bipartite: A={0, 2}, B={1}.");

    vector<vector<int>> graph2 = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph2);
    CHECK(ariel::Algorithms::isBipartite(g) == "0");

    vector<vector<int>> graph3 = {
        {0, 1, 2, 0, 0},
        {1, 0, 3, 0, 0},
        {2, 3, 0, 4, 0},
        {0, 0, 4, 0, 5},
        {0, 0, 0, 5, 0}};
    g.loadGraph(graph3);
    CHECK(ariel::Algorithms::isBipartite(g) == "0");
}

TEST_CASE("Test invalid graph")
{
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, 1, 2, 0},
        {1, 0, 3, 0},
        {2, 3, 0, 4},
        {0, 0, 4, 0},
        {0, 0, 0, 5}};
    CHECK_THROWS(g.loadGraph(graph));
}

TEST_CASE("Test shortestPath with negative edge but no negative cycle")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
            {0, -5, 0, 0, 0, 0},
            {0, 0, -9, 0, 0, 0},
            {0, 0, 0, -12, 0, 0},
            {0, 0, 0, 0, 5, 0},
            {0, 0, 0, 0, 0, 8},
            {0, 0, 0, 0, 0, 0}};
    grp.loadGraph(graph);
    CHECK(ariel::Algorithms::shortestPath(grp, 0, 5) == "0->1->2->3->4->5");
}

TEST_CASE("Test shortestPath with negative edge but no negative cycle and directed graph")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
            {0, -1, 0, 0, 0},
            {0, 0, 3, 0, 0},
            {0, 3, 0, 4, 0},
            {0, 0, 4, 0, 6},
            {0, 0, 0, 6, 0}};
    grp.loadGraph(graph);
    CHECK(ariel::Algorithms::shortestPath(grp, 0, 4) == "0->1->2->3->4");
}

TEST_CASE("Test shortestPath with negative cycle")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
            {0, 1, -1, 0, 0},
            {1, 0, -3, 0, 0},
            {-1, -3, 0, 4, 0},
            {0, 0, 4, 0, 6},
            {0, 0, 0, 6, 0}};
    grp.loadGraph(graph);
    CHECK(ariel::Algorithms::shortestPath(grp, 0, 4) == "ERROR: The graph contains a negative-weight cycle.");
}

TEST_CASE("Test shortestPath with negative cycle and directed graph")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
            {0, 1, -1, 0, 0},
            {0, 0, -3, 0, 0},
            {-1, -3, 0, 4, 0},
            {0, 0, 4, 0, 4},
            {0, 0, 0, 4, 0}};
    grp.loadGraph(graph);
    CHECK(ariel::Algorithms::shortestPath(grp, 0, 4) == "ERROR: The graph contains a negative-weight cycle.");
}

TEST_CASE("Test isContainsCycle directed graph")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
            {0, 1, 0},
            {0, 0, 1},
            {0, 0, 0}};
    grp.loadGraph(graph);
    CHECK(ariel::Algorithms::isContainsCycle(grp) == "0");
    vector<vector<int>> graph2 = {
            {0, 1, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {1, 0, 0, 1, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0}};
    grp.loadGraph(graph2);
    CHECK(ariel::Algorithms::isContainsCycle(grp) == "0->1->2->0");
}

TEST_CASE("Test isContainsCycle with single node graph")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {{0}};
    grp.loadGraph(graph);
    CHECK(ariel::Algorithms::isContainsCycle(grp) == "0");
}

TEST_CASE("Test isContainsCycle with self-loop")
{
    ariel::Graph g;
    vector<vector<int>> graph = {{1}};
    g.loadGraph(graph);
    CHECK(ariel::Algorithms::isContainsCycle(g) == "0->0");
}

TEST_CASE("Test isContainsCycle with multiple disconnected components")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
            {0, 1, 0, 0, 0},
            {1, 0, 0, 0, 0},
            {0, 0, 0, 1, 1},
            {0, 0, 1, 0, 0},
            {0, 0, 1, 0, 0}};
    grp.loadGraph(graph);
    CHECK(ariel::Algorithms::isContainsCycle(grp) == "0");
}

TEST_CASE("Test isContainsCycle with multiple cycles")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
            {0, 1, 1, 0, 0},
            {1, 0, 1, 0, 0},
            {1, 1, 0, 1, 1},
            {0, 0, 1, 0, 1},
            {0, 0, 1, 1, 0}};
    grp.loadGraph(graph);
    CHECK(ariel::Algorithms::isContainsCycle(grp) != "0");  // Expect any valid cycle
}

TEST_CASE("Test negativeCycle with no negative cycle")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
            {0, 1, 0, 0, 0},
            {1, 0, 3, 0, 0},
            {0, 3, 0, 4, 0},
            {0, 0, 4, 0, 6},
            {0, 0, 0, 6, 0}};
    grp.loadGraph(graph);

    CHECK(ariel::Algorithms::negativeCycle(grp) == "0");
}

TEST_CASE("Test negativeCycle with negative cycle")
{
    ariel::Graph grp;
    vector<vector<int>> graph = {
            {0, -1, 0, 0, 0},
            {-1, 0, -3, 0, 0},
            {0, 0, 0, 4, 0},
            {-6, 0, 4, 0, 6},
            {0, 0, 0, 6, 0}};
    grp.loadGraph(graph);

    CHECK(ariel::Algorithms::negativeCycle(grp) != "0");
}

