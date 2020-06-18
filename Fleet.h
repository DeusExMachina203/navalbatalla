
#ifndef NAVALBATALLA_FLEET_H
#define NAVALBATALLA_FLEET_H
#include "types.h"

class fleet{
private:
    shiplistT shiplist;
    spaceT width;
    spaceT length;

public:
    fleet(shiplistT _shiplist, spaceT _width, spacedT _length, tokenT TOKEN)
    void place_ship();
    void place_fleet();
};
#endif //NAVALBATALLA_FLEET_H
