#include <Node.h>

//Constructors
Node::Node(uint32_t _cost, Nodes _nearStreets): cost(_cost), nearStreets(_nearStreets){}
Node::~Node(){}

//Methods
uint32_t Node::getCost(void) const{
    return(cost);
}
Nodes Node::getStreets(void) const{
    return(nearStreets);
}