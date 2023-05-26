#include <Node.h>
#include <Graph.h>

Node::Node(CoordXY p, uint32_t c, NextNodes nS){
    position = p; cost = c; nearStreets = nS;
}

CoordXY Node::getPos(void) const{
    return(position);
}
uint32_t Node::getCost(void) const{
    return(cost);
}
NextNodes Node::getNodes(void) const{
    return(nearStreets);
}