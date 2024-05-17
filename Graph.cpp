// mail - omer7530@gmail.com
// Author - Omer Cohen

#include "Graph.hpp"

#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;
using namespace ariel;

bool Graph::is_negative_edges_help(const vector<vector<int>>& graph)
{
    for (size_t i = 0; i < graph.size(); i++) {
            for (size_t j = 0; j < graph[i].size(); j++) {
                if(graph[i][j] < 0)
                    return true;
            }
        }
        return false;
}

bool Graph::is_simetric_help(const vector<vector<int>>& graph)
{
    for (size_t i = 0; i < graph.size(); i++) {
            for (size_t j = 0; j < graph[i].size(); j++) {
                if (i != j && graph[i][j] != graph[j][i]) {
                    return false;
                }
            }
        }
        return true;
}

void Graph::loadGraph(const vector<vector<int>> &graph)
{
    if (graph.empty()) {
            throw std::invalid_argument("Invalid graph: The graph cannot be empty");
        }
        int n = graph.size();
        for (const auto& row : graph) {
            if (row.size() != (size_t)n) {
                throw std::invalid_argument("Invalid graph: The graph is not a square matrix.");
            }
        }
        this->matrix = graph;
        this->isDirected = !(is_simetric_help(this->matrix));
        this->isNegativeEdges = is_negative_edges_help(this->matrix);
}

void Graph::printGraph()
{
    int numVertices = this->matrix.size(); // Number of vertices in the graph
        int numEdges = 0; // Initialize edge count

        // Count the number of edges
        for (size_t i = 0; i < matrix.size(); i++) {
            for (size_t j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] != 0) {
                    if (isDirected || i < j) { // Avoid double-counting for undirected graphs
                        numEdges++;
                    }
                }
            }
        }

        // Print the details of the graph
        cout << "Graph with " << numVertices << " vertices and " << numEdges << " edges. " ;
        cout << "this graph is " << (this->isDirected ? "undirected" : "directed") << "." << endl;
}

vector<int> Graph::getNeighbors(int vertex)
{
    vector<int> neighbors;
        for (size_t i = 0; i < this->matrix[static_cast<size_t>(vertex)].size(); i++) {
            if (this->matrix[static_cast<size_t>(vertex)][i] != 0) {
                neighbors.push_back(i);
            }
        }
        return neighbors;
}

vector<vector<int>> Graph::getMatrix()
{
    return this->matrix;
}

bool Graph::getIsDirected()
{
    return this->isDirected;
}

bool Graph::getIsNegativeEdges()
{
    return this->isNegativeEdges;
}