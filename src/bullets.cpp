#include <iostream>
#include <random>
#include "bullets.h"

std::random_device rd;  // Obtain a random seed from hardware
std::mt19937 rng(rd()); // Seed the generator

std::uniform_int_distribution<int> dist(1, 5); // Range: [1, 100]



//=============BULLETS==================//
Bullet::Bullet() : direction(1, 0), position(0, 0) {
    
}
bool Bullet::obsticle() {
    return false;
}


//=============Normal_Bullet==================//
Normal_Bullet::Normal_Bullet() : Bullet(){
    //Bullet::direction.x = -1;
}
void Normal_Bullet::deploy() {
    while(not obsticle()) {
        position += direction;
    }
}
bool Normal_Bullet::isflying() const{
    std::cout << flying ? "Full_Metal_Jacket is flying" : "Full_Metal_Jacket isn not flying" << std::endl;
    return flying;
}
void Normal_Bullet::deploy() {
    if(nothing_ahead) {
        Normal_Bullet::fly();
    }
}
//=============Faster_Bullet==================//
bool Faster_Bullet::isflying() const{
    std::cout << flying ? "Hollow_Point is flying" : "Hollow_Point isn not flying" << std::endl;
    return flying;
}
//=============Power_Bullet==================//
bool Power_Bullet::isflying() const{
    std::cout << flying ? "Soft_Point is flying" : "Soft_Point isn not flying" << std::endl;
    return flying;
}
//=============Building_Bullet==================//
bool Building_Bullet::isflying() const{
    std::cout << flying ? "Ballistic_Tip is flying" : "Ballistic_Tip isn not flying" << std::endl;
    return flying;
}
