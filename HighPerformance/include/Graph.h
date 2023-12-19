#include <global.h>
#include <Node.h>

class Graph {
    private:
        std::vector<std::vector<Node*>> nodes;

        CoordXY size;
    public:
        Graph(std::vector<std::vector<Node*>> ady, CoordXY s);
}