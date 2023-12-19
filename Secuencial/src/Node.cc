#include "Node.h"
#include "Graph.h"

Node::Node(CoordXY p, uint32_t c, NextNodes nS){
    position = p; cost = c; nearStreets = nS;
}

CoordXY Node::getPos(void) const{
    return(position);
}
uint32_t Node::getCost(void) const{
    return(cost);
}
NextNodes Node::getStreets(void) const{
    return(nearStreets);
}
void Node::setPos(CoordXY p){
    position = p;
}
void Node::setCost(uint32_t c){
    cost = c;
}
void Node::setStreets(NextNodes nS){
    nearStreets = nS;
}