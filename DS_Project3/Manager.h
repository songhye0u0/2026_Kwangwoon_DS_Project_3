#pragma once
#include "GraphMethod.h"
#include <fstream>
#include <string>

using namespace std;

class Manager
{
private:
    Graph* graph;
    Manager(const Manager&) = delete;
    Manager& operator=(const Manager&) = delete;
    ofstream fout;
    void printSuccess(const string& command, const string& body);
public:
    Manager();
    ~Manager();
    bool run(const char* commandFile = "command.txt", const char* logFile = "log.txt");
    bool LOAD(const char* filename);
    bool PRINT();
    bool mBFS(char option, int vertex);
    bool mDFS(char option, int vertex);
    bool mDIJKSTRA(char option, int vertex);
    bool mKRUSKAL();
    bool mBELLMANFORD(char option, int start, int end);
    bool mFLOYD(char option);
    bool mSORT(char option, int vertex, char order, char method);
    void printErrorCode(int code);
};
