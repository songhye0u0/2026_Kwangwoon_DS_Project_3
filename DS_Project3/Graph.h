#pragma once
#include <map>
#include <ostream>
#include <vector>
#include <cstdint>

using namespace std;

using Weight = int64_t;
using Adjacent = map<int, Weight>;
class Graph
{
protected:
    bool m_Type; 
    int m_Size;
    void collectUndirected(int vertex, Adjacent* result) const;
public:
    Graph(bool type, int size);
    virtual ~Graph();
    bool getType() const;
    int getSize() const;
    bool validVertex(int vertex) const;
    virtual void getAdjacentEdges(int vertex, Adjacent* result) const = 0;
    virtual void getAdjacentEdgesDirect(int vertex, Adjacent* result) const = 0;
    Adjacent getOutgoingEdges(int vertex) const;
    virtual Weight getEdgeWeight(int from, int to) const = 0;
    virtual bool insertEdge(int from, int to, Weight weight) = 0;
    virtual bool printGraph(ostream* out) const = 0;
    Adjacent getEdgeView(int vertex, char direction) const;
    bool hasNegativeEdge() const;
};

void printWeightMatrix(const vector<vector<Weight> >& values,
                       ostream& out, bool markInfinity = false, Weight infinity = 0);
