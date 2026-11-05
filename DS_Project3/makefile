CXX = g++
CXXFLAGS = -std=c++11 -g -Wall -Wextra
SOURCES = Graph.cpp ListGraph.cpp MatrixGraph.cpp GraphMethod.cpp EdgeHeap.cpp SortEngine.cpp Manager.cpp main.cpp
OBJECTS = $(SOURCES:.cpp=.o)
DEPS = $(OBJECTS:.o=.d)

.PHONY: all clean
all: run

run: $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

-include $(DEPS)

clean:
	rm -f $(OBJECTS) $(DEPS) run
