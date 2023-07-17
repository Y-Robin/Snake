#include "Snake.h"

Snake::Snake(int x, int y) : dx(0), dy(0) {
    body.push_back(EntityXY(x, y));
}

void Snake::changeDirection(int dx, int dy) {
        this->dx = dx;
        this->dy = dy;
    }

void Snake::move() {
        for (int i = body.size() - 1; i > 0; --i) {
            body[i].x = body[i - 1].x;
            body[i].y = body[i - 1].y;
        }
        body[0].x += dx;
        body[0].y += dy;
    }

void Snake::grow() {
    int newX = body[body.size() - 1].x - dx;
    int newY = body[body.size() - 1].y - dy;
    body.push_back(EntityXY(newX, newY));
}
