#ifndef BULLETS_H
#define BULLETS_H
#include "Texture.h"
#include "Vector2.h"

class Bullet {
protected:
    Vector2 direction;
    Vector2 position;
public:
    
    
    bool obsticle_ahead;
    Texture tx;
    Bullet();

    virtual void deploy();
    virtual void fly();
    virtual bool flying() const {
        std::cout << flying ? "Bullet is flying" : "Bullet isn not flying" << std::endl;
        return flying;
    }
    bool obsticle();
    virtual void colllide();
//Draw itself
    
};

class Normal_Bullet : public Bullet {
    static Texture tx;
public:
//Main functions
    Normal_Bullet();
    //Functionality
    void deploy() override;
    bool isflying() const override;
};


class Faster_Bullet : public Bullet {
//Static class members
    static Texture tx;
public:
    //Functionality
    void deploy() override;
    bool isflying() const override;
};


class Power_Bullet : public Bullet {
//Static class members
    static Texture tx;
public:
    //Functionality
    void deploy() override;
    bool isflying() const override;
};


class Building_Bullet : public Bullet {
//Static class members
    static Texture tx;
public:
    //Functionality
    void deploy() override;
    bool isflying() const override;
};



#endif //BULLETS_H

