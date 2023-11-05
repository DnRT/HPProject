#include <Graph.h>
#include <Node.h>

//Constructor
Graph::Graph(std::vector<std::vector<Node*>> ady, CoordXY s){
    nodes = ady; size = s;
}
//Methods
CoordXY Graph::getSize(void) const{
    return(size);
}
uint32_t Graph::ManhattanLong(Node n1, Node n2){
    uint32_t difX = (n2.getPos().x - n1.getPos().x);
    uint32_t difY = (n2.getPos().y - n1.getPos().y);
    uint32_t dist = difX + difY;
    return(dist);
}
uint32_t Graph::calcF(void) const{
    uint32_t f = 0;
    return(f);
}
uint32_t Graph::calcG(void) const{
    uint32_t g = 0;
    return(g);
}
uint32_t Graph::calcH(void) const{
    uint32_t h = 0;
    return(h);
}