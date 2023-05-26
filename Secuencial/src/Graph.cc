#include <Graph.h>
#include <Node.h>

Graph::Graph(){

}

uint32_t Graph::ManhattanLong(Node n1, Node n2){
    uint32_t r = (n1.position.x - n2.position.x) + (n1.position.y - n2.position.y);
    if(r < 0){
        r*=-1;
    }
    return(r);
}
