#include "AStar.h"


AStar::AStar(Graph g, Node s){
    map = g; start = s;
    open.insert(open.begin(), &s);
}
NextNodes AStar::Algorithm(Node end){
    NextNodes path;
    return(path);
}

NextNodes AStar::NextStep(Node n){
    return(n.getStreets());
}