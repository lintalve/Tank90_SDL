#ifndef BLOCK_H
#define BLOCK_H
#include "Texture.h"
#include "Vector2.h"


class Block {
    Vector2 grid_p;
    Texture tx;
    bool destroyed;
public:
    Block();
    ~Block();
    void destroy();
    void draw();
    void erase();
};

class Brick_Block : public Block {
    static Texture tx;
};
class White_Block : public Block {};
class Trees_Block : public Block {};

#endif //BLOCK_H
