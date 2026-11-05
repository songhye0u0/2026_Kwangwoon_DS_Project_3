#include "EdgeHeap.h"

using namespace std;

int compareEdges(const HeapEdge& a, const HeapEdge& b, char order, uint64_t* counter)
{

}

EdgeHeap::EdgeHeap(char order) : ascending(order == 'A'), comparisonCount(0)
{

}

bool EdgeHeap::empty() const
{
    return heap.empty();
}

size_t EdgeHeap::size() const
{
    return heap.size();
}

uint64_t EdgeHeap::comparisons() const
{
    return comparisonCount;
}

const vector<HeapEdge>& EdgeHeap::data() const
{
    return heap;
}

bool EdgeHeap::precedes(const HeapEdge& a, const HeapEdge& b)
{

}

void EdgeHeap::build(const vector<HeapEdge>& input)
{

}

void EdgeHeap::siftUp(size_t index)
{

}

void EdgeHeap::siftDown(size_t index)
{

}

void EdgeHeap::push(const HeapEdge& edge)
{

}

HeapEdge EdgeHeap::pop()
{

}

bool KruskalHeap::precedes(const MstEdge& a, const MstEdge& b) const
{

}

void KruskalHeap::siftDown(size_t index)
{

}

void KruskalHeap::build(const vector<MstEdge>& input)
{

}

bool KruskalHeap::empty() const
{
    return heap.empty();
}

MstEdge KruskalHeap::pop()
{

}

