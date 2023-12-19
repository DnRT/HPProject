#include "global.h"

class Node {
    private:
        uint32_t cost;
        CoordXY position;
        NextNodes nearStreets;
    public:
        Node(CoordXY p, uint32_t c, NextNodes nS);
        CoordXY getPos(void) const;
        uint32_t getCost(void) const;
        NextNodes getStreets(void) const;
        void setPos(CoordXY p);
        void setCost(uint32_t c);
        void setStreets(NextNodes nS);

};