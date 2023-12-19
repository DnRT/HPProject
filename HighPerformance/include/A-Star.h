#include <global.h>
#include <Graph.h>

class A{
    private:
        Graph map;
        Node start;
        NextNodes open, closed;
    public:
        A(Graph g, Node s);
        uint32_t ManhattanLong(Node n1, Node n2);
        NextNodes Algorithm(Node end);
        NextNodes Path(Node n);
        NextNodes NextStep(Node n);

}