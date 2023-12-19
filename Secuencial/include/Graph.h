#include "global.h"
#include "Node.h"

class Graph {
    private:
        std::vector<std::vector<Node*>> nodes;

        CoordXY size;
    public:
        Graph(std::vector<std::vector<Node*>> ady, CoordXY s);
        CoordXY getSize(void) const;
        uint32_t ManhattanLong(Node n1, Node n2);
        uint32_t calcF(void);
        uint32_t calcG(void);
        uint32_t calcH(void);
};