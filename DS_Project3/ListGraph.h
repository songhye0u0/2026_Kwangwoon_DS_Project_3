#pragma once
#include "Graph.h"

using namespace std;

class ListGraph : public Graph
{
private:
    vector<Adjacent> m_List;
public:
    ListGraph(bool type, int size);
    void getAdjacentEdges(int vertex, Adjacent* result) const override;
    void getAdjacentEdgesDirect(int vertex, Adjacent* result) const override;
    Weight getEdgeWeight(int from, int to) const override;
    bool insertEdge(int from, int to, Weight weight) override;
    bool printGraph(ostream* output) const override;
};
