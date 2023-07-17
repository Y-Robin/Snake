#include "Game.h"
#include <iostream>
#include <vector>
#include <conio.h>
#include <windows.h>

int main() {
    Game game(20, 20);
    game.changeDirection(1, 0);  // Initial direction set to right

    while (!game.gameOver) {
        if (_kbhit()) {
            switch (_getch()) {
            case 'a':
                game.changeDirection(-1, 0);
                break;
            case 'd':
                game.changeDirection(1, 0);
                break;
            case 'w':
                game.changeDirection(0, -1);
                break;
            case 's':
                game.changeDirection(0, 1);
                break;
            }
        }
        game.update();
        game.draw();
        Sleep(1000);  // Sleep for a short time to control the speed of the game
    }

    return 0;
}
