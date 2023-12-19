#include <Graph.h>
#include <Node.h>

Graph::Graph(std::vector<std::vector<Node*>> ady, CoordXY s){
    nodes = ady; size = s;
}
