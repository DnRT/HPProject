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
uint32_t Node::getF(void) const{
    return(f);
}
uint32_t Node::getG(void) const{
    return(g);
}
uint32_t Node::getH(void) const{
    return(h);
}
NextNodes Node::getNearStreets(void) const{
    return(nearStreets);
}
void Node::setPos(CoordXY p){
    position = p;
}
void Node::setCost(uint32_t c){
    cost = c;
}
void Node::setF(uint32_t fi){
    f = fi;
}
void Node::setG(uint32_t gi){
    g = gi;
}
void Node::setH(uint32_t hi){
    h = hi;
}
void Node::setNearStreets(NextNodes nS){
    nearStreets = nS;
}