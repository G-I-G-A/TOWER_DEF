#ifndef ATTACKTOWER_H
#define ATTACKTOWER_H
#include "tower.h"
#include <SFML/Graphics.hpp>


class attackTower : public Tower
{
public:
    attackTower();
    ~attackTower();

    int getPower();
    int getLevelMax();
    float getRange();
    float getSpeedHit();
    int getCost();
    char getDescrption();



protected:
    int power;
    int cost;
    float range;
    float speedHit;
    int levelMax;
    char description;
    sf::Texture texture;
    static sf::Sprite attackT;

    void loadTexture();


};

#endif // ATTACKTOWER_H
