#pragma once
#include "Graph.h"
#include <cstddef>

using namespace std;

struct HeapEdge
{
    int to;
    Weight weight;
    HeapEdge(int vertex = 0, Weight value = 0) : to(vertex), weight(value)
    {

    }

};

int compareEdges(const HeapEdge& a, const HeapEdge& b, char order,
                 uint64_t* counter = nullptr);
class EdgeHeap
{
private:
    vector<HeapEdge> heap;
    bool ascending;
    uint64_t comparisonCount;
    bool precedes(const HeapEdge& a, const HeapEdge& b);
    void siftUp(size_t index);
    void siftDown(size_t index);
public:
    explicit EdgeHeap(char order);
    bool empty() const;
    size_t size() const;
    void build(const vector<HeapEdge>& input);
    uint64_t comparisons() const;
    const vector<HeapEdge>& data() const;
    void push(const HeapEdge& edge);
    HeapEdge pop();
};
struct MstEdge
{
    int from, to;
    Weight weight;
    MstEdge(int u = 0, int v = 0, Weight w = 0) : from(u), to(v), weight(w)
    {

    }

};
class KruskalHeap
{
private:
    vector<MstEdge> heap;
    bool precedes(const MstEdge& a, const MstEdge& b) const;
    void siftDown(size_t index);
public:
    void build(const vector<MstEdge>& input);
    bool empty() const;
    MstEdge pop();
};
