#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include <vector>
#include "Block.h"
#include "Tank.h"


class GameBoard {
    static const int x;
    static const int y;
    static const int width;
    static const int height;
    
    static const int grid_width = 13*2;
    static const int grid_height = 12*2;
    static const int cell_width = 15;
    static const int cell_height = 13;
    int array[grid_width * grid_height];
    std::vector<Tank> tanks;
public:
    //Main methods
    GameBoard();
    ~GameBoard();
    void spawn_tank();
    void createMapFromTexture();
    
};

#endif //GAMEBOARD_H
