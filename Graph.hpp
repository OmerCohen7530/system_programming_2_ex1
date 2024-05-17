// mail - omer7530@gmail.com
// Author - Omer Cohen

#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <vector>

using namespace std;

namespace ariel
{
    class Graph
    {
    private:
        vector<vector<int>> matrix;
        bool isDirected;
        bool isNegativeEdges;

        // check if the graph has negative edges
        bool is_negative_edges_help(const vector<vector<int>>& graph);

        // check if the graph is directed or not
        bool is_simetric_help(const vector<vector<int>>& graph);

    public:
        
        // build the graph with the given matrix
        void loadGraph(const vector<vector<int>>& graph);

        // print the graph
        void printGraph();

        // get the neighbors of the given vertex
        vector<int> getNeighbors(int vertex);

        //getters
        vector<vector<int>> getMatrix();
        bool getIsDirected();
        bool getIsNegativeEdges();
        };
} // namespace ariel

#endif // GRAPH_HPP