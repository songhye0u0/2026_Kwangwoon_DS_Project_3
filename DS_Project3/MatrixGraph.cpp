#include "MatrixGraph.h"

using namespace std;

MatrixGraph::MatrixGraph(bool type, int size) : Graph(type, size), m_Mat(size, vector<Weight>(size, 0))
{

}

void MatrixGraph::getAdjacentEdges(int vertex, Adjacent* result) const
{

}

void MatrixGraph::getAdjacentEdgesDirect(int vertex, Adjacent* result) const
{

}

Weight MatrixGraph::getEdgeWeight(int from, int to) const
{

}

bool MatrixGraph::insertEdge(int from, int to, Weight weight)
{

}

bool MatrixGraph::printGraph(ostream* output) const
{

}

