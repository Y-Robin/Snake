#ifndef FRUIT_H
#define FRUIT_H


#include "Entity.h"

class Fruit : public EntityXY {
public:
    Fruit(int x, int y);

    void move(int x, int y);
};

#endif