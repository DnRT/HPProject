#include <global.h>
#include <Node.h>

class Graph {
    private:
        Nodes nodes;
        std::string label;
    public:
        Graph(Nodes, std::string);
        std::string getLabel(void) const;
        uint32_t ManhattanLong(Node, Node);
        uint32_t calcF(void);
        uint32_t calcG(void);
        uint32_t calcH(void);
};