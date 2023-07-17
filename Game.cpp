#include "Game.h"



Game::Game(int widthTemp, int heightTemp)
        : snake(widthTemp / 2, heightTemp / 2), fruit(rand() % widthTemp, rand() % heightTemp), gameOver(false) {
    width = widthTemp;
    height = heightTemp;
}

void Game::changeDirection(int dx, int dy) {
    snake.changeDirection(dx, dy);
}

void Game::update() {
    if (snake.body[0].x == fruit.x && snake.body[0].y == fruit.y) {
        fruit.move((rand() % (width-1))+1, (rand() % (height-1))+1);
        snake.grow();
    }

    if (snake.body[0].x < 0 || snake.body[0].x >= width || snake.body[0].y < 0 || snake.body[0].y >= height) {
        gameOver = true;
    }

    for (int i = 1; i < snake.body.size(); ++i) {
        if (snake.body[0].x == snake.body[i].x && snake.body[0].y == snake.body[i].y) {
            gameOver = true;
        }
    }

    snake.move();
}

void Game::draw() {
    system("cls");
    for (int i = 0; i < height+1; ++i) {
        for (int j = 0; j < width+1; ++j) {
            if (i == 0 || i == height  || j == 0 || j == width ) {
                std::cout << "#";
            }
            else if (i == fruit.y && j == fruit.x) {
                std::cout << "F";
            }
            else {
                bool snakePart = false;
                for (const auto& part : snake.body) {
                    if (part.x == j && part.y == i) {
                        std::cout << "*";
                        snakePart = true;
                        break;
                    }
                }
                if (!snakePart) {
                    std::cout << " ";
                }
            }
        }
        std::cout << std::endl;
    }
}
