#pragma once
#include "EdgeHeap.h"

using namespace std;

struct MergePass
{
    size_t width;
    uint64_t comparisons;
    vector<HeapEdge> data;
};
struct SortResult
{
    char direction = 'O';
    char order = 'A';
    char method = 'H';
    int vertex = -1;
    vector<HeapEdge> input, heapBuild, heapAfterFirstPop, heapSorted, mergeSorted;
    vector<MergePass> mergePasses;
    uint64_t heapBuildComparisons = 0;
    uint64_t heapFirstPopComparisons = 0;
    uint64_t heapComparisons = 0;
    uint64_t mergeComparisons = 0;
};

void mergeSort(const vector<HeapEdge>& input, char order,
               vector<HeapEdge>& result, uint64_t& comparisons,
               vector<MergePass>& passes);
bool computeSort(const Graph* graph, char direction, int vertex, char order, char method, SortResult& result);
void printSortResult(const SortResult& result, ostream& out);
void printSortTrace(const SortResult& result, ostream& out);
