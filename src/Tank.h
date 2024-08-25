#ifndef TANK_H
#define TANK_H
#include <vector>
#include "Vector2.h"
#include "Bullets.h"


class Tank {
    static const int size = 20;
    static int quantity;
    static int left;
//Instance members

    Bullet* ammunition[size];
    Vector2 pos;
    Vector2 direction;
    
public:
    //Abstract Logical Functionality
    virtual bool obsticle();
    virtual void advance();
    virtual void shoot();
    virtual void reload();
    //Platform Functionality
    virtual void draw() = 0;
};

class Bronze_Tank : public Tank {
//Static class members
    static Texture tx;
    
public:
    Bronze_Tank();
    Bronze_Tank(Vector2 p, Vector2 direction);
    ~Bronze_Tank();
    void shoot() override;
};


class Silver_Tank : public Tank {
//Static class members
    static Texture tx;
};
class Gold_Tank : public Tank {
//Static class members
    static Texture tx;
};
class Platinum_Tank : public Tank {
//Static class members
    static Texture tx;
};

#endif //TANK_H
