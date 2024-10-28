#ifndef _NODE_HH_
#define _NODE_HH_

#include <global.h>

class Node {
    private:
        uint32_t cost;
        Nodes nearStreets;
    public:
        Node(uint32_t, Nodes);
        ~Node(void);
        uint32_t getCost(void) const;
        Nodes getStreets(void) const;

};
#endif