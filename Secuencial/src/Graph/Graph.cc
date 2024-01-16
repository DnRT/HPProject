#include <Graph.h>

//Constructors
Graph::Graph(Nodes _nodes, std::string _label): nodes(_nodes), label(_label){}
//Methods
std::string Graph::getLabel(void) const{
    return(label);
}
uint32_t Graph::ManhattanLong(Node n1, Node n2){
    return(Graph::calcF());
}
uint32_t Graph::calcF(void){}
uint32_t Graph::calcG(void){}
uint32_t Graph::calcH(void){}