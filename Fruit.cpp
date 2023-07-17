#include "Fruit.h"


Fruit::Fruit(int x, int y) : EntityXY(x, y) {}

void Fruit::move(int x, int y) {
    this->x = x;
    this->y = y;
}
