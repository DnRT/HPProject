#include <A.h>
#include <Graph.h>
#include <Node.h>

A::A(Graph g, Node s){
    map = g; start = s;open.insert(open.front(), s);
    start.setG(0);start.setH(ManhattanLong(start));start.setF(start.getG()+start.getH());
}
NextNodes A::Algorithm(Node end){
    NextNodes path;
    uint32_t it =  0;
    while(!open.empty()){
        Node process; // equals node with less f
        if(process == end){
            return Path(process);
        }
        auto aux = find(open.front(), open.back(), process);
        open.erase(aux);
        closed.insert(it ,process);
        for(Node next: NextStep(process)){
            if(closed.size() != 0){
                //skip
            }
            else if(open.size() == 0){
                open.insert(open.begin(), next);
            }
            else{
                Node actual; //open.find(node)
                if(next.getG() < actual.getG()){
                    actual.setG(next.getG());
                    actual.setF(next.getF());
                    actual.setNearStreets(next.getNearStreets());
                }
            }
        }
        it++;
    }
    std::cout << ""
    return(path);
}

uint32_t A::ManhattanLong(Node n2){
    uint32_t r, x_dif = (n1.position.x - n2.position.x), y_dif = (n1.position.y - n2.position.y);
    if(x_dif < 0){
        x_dif *=-1;
    }
    if(y_dif < 0){
        y_dif *=-1;
    }
    r = x_dif + y_dif;
    return(r);
}

NextNodes A::NextStep(Node n){
    return(n.getNearStreets());
}