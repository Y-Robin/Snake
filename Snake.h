#ifndef SNAKE_H
#define SNAKE_H

#include "Entity.h"
#include <iostream>
#include <vector>
#include <conio.h>
#include <windows.h>

class Snake {
public:
    std::vector<EntityXY> body;
    int dx, dy;

    Snake(int x, int y);

    void changeDirection(int dx, int dy);

    void move();

    void grow();
};

#endif
