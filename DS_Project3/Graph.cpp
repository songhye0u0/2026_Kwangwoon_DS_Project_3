#include "Graph.h"

using namespace std;

Graph::Graph(bool type, int size) : m_Type(type), m_Size(size)
{

}

Graph::~Graph()
{

}

bool Graph::getType() const
{
    return m_Type;
}

int Graph::getSize() const
{
    return m_Size;
}

bool Graph::validVertex(int vertex) const
{

}

Adjacent Graph::getOutgoingEdges(int vertex) const
{

}

Adjacent Graph::getEdgeView(int vertex, char direction) const
{

}

void Graph::collectUndirected(int vertex, Adjacent* result) const
{

}

bool Graph::hasNegativeEdge() const
{

}

void printWeightMatrix(const vector<vector<Weight> >& values,
                       ostream& out, bool markInfinity, Weight infinity)
{

}

