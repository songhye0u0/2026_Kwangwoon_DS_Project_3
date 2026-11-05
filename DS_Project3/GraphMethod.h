#pragma once
#include "ListGraph.h"
#include "MatrixGraph.h"
#include "SortEngine.h"

using namespace std;

bool BFS(const Graph* graph, char direction, int start, ostream& out);
bool DFS(const Graph* graph, char direction, int start, ostream& out);
bool Kruskal(const Graph* graph, ostream& out);
bool Dijkstra(const Graph* graph, char direction, int start, ostream& out);
bool Bellmanford(const Graph* graph, char direction, int start, int end, ostream& out);
bool FLOYD(const Graph* graph, char direction, ostream& out);
bool SORT(const Graph* graph, char direction, int vertex, char order, char method, ostream& out);
