#include <global.h>

class Node {
    private:
        uint32_t cost, f, g, h;
        CoordXY position;
        NextNodes nearStreets;
    public:
        Node(CoordXY p, uint32_t c, NextNodes nS);
        CoordXY getPos(void) const;
        uint32_t getCost(void) const;
        uint32_t getF(void) const;
        uint32_t getG(void) const;
        uint32_t getH(void) const;
        NextNodes getNodes(void) const;
        void setPos(CoordXY p);
        void setCost(uint32_t c);
        void setF(uint32_t fi);
        void setG(uint32_t gi);
        void setH(uint32_t hi);
        void setNearStreets(NextNodes nS);

}