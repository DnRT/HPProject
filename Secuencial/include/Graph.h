#include <global.h>
#include <Node.h>

class Graph {
    private:
        std::vector<Node*> nodes;

        CoordXY size;
    public:
        Graph();
        uint32_t ManhattanLong(Node n1, Node n2);
}