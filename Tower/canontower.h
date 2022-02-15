#ifndef CANONTOWER_H
#define CANONTOWER_H
#include "tower.h"
#include <SFML/Graphics.hpp>


class canonTower : public Tower
{
public:
    canonTower();
    ~canonTower();

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
    static sf::Sprite canonT;

    void loadTexture();
};

#endif // CANONTOWER_H
