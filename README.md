## omer cohen
## omer7530@gmail.com

# Graph and algorithms Project

this project This project contains a collection of algorithm implementations and graph traversal techniques in C++.

## Features
- The graph represented by ```voctor<vectort<int>>```.
- Directed graph will be simetrix metrix.

## Classes
1. ```Graph.cpp```
2. ```Algorithms.cpp```

### Graph.cpp:
1. ```loadGraph``` build the graph with the given matrix.
2. ```printGraph``` print the num of edges, num of verctices, and if the graph is directed or undirected.

### Algorithms.cpp:
1. ```isConnected``` checking if the graph is connected by using **BFS** algorithm.
if conncted return 1 otherwise, return 0.

2. ```isContainsCycle``` checking if the graph is contains a cycle by using **DFS** algorithm.
if contains cycle return the cycle otherwise, return 0.

3. ```shortedPath``` looking for the shortest path between two nodes by using **Dijkstra** and **BellmanFord** algorithms.
if there is a path return the path otherwise, return -1, and if there is a negative cycle so it return "ERROR".

4. ```negativeCycle``` checking if the graph is contains a negative cycle.
if contains negative cycle return the cycle otherwise, return 0.

5. ```isBipartite``` checking if this graph is bipartite by using **Graph 2 coloring** idea.
if it is bipartite return the 2 groups otherwise, return 0.

## How to Compile and Run
- clone the reposiroty
## demo
- run ```make demo``` command in teminal.

## Testing
testing 25 differenet tests.
- run ```make test``` command in teminal.
- run ```./test``` in teminal.

## Valgrind
cheaking for memory leaks.
- run ```make vlagrind``` command in teminal.
