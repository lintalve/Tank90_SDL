#ifndef GAME_H
#define GAME_H

#include "GameBoard.h"

class Game {
    GameBoard gb;
    int score;
public:
    Game();
    ~Game();
    void redraw();
    void redraw();
};

#endif /* Game_h */
