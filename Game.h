#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include <conio.h>
#include <windows.h>
#include "Snake.h"
#include "Fruit.h"

class Game {
public:
    Snake snake;
    Fruit fruit;
    bool gameOver;
    int width, height;

    Game(int widthTemp, int heightTemp);

    void changeDirection(int dx, int dy);

    void update();

    void draw();
};


#endif