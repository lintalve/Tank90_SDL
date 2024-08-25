#include "GameBoard.h"

GameBoard::GameBoard() {
    createMapFromTexture();
    spawn_tank(); //enemy
    spawn_tank(); //player
    
}
