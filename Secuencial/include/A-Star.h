#include <global.h>
#include <Graph.h>

class A{
    private:
        Graph map;
        Node start;
        NextNodes open, closed;
    public:
        A(Graph g, Node s);
        NextNodes Algorithm(Node end);
        NextNodes Path(Node n);
        NextNodes NextStep(Node n);

}