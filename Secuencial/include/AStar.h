#include "global.h"
#include "Graph.h"

class AStar{
    private:
        Graph map;
        Node start;
        NextNodes open, closed;
    public:
        AStar(Graph g, Node s);
        NextNodes Algorithm(Node end);
        NextNodes Path(Node n);
        NextNodes NextStep(Node n);

};