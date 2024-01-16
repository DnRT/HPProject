#include <global.h>

#include <Graph.h>

class AStar{
    private:
        Graph map;
        Node start;
        Nodes open, closed;
    public:
        AStar(Graph g, Node s);
        Nodes Algorithm(Node end);
        Nodes Path(Node n);
        Nodes NextStep(Node n);

};