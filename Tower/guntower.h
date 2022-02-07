#ifndef GUNTOWER_H
#define GUNTOWER_H
#include "tower.h"
#include <SFML/Graphics.hpp>


class gunTower : public Tower
{
public:
    gunTower();
    ~gunTower();

    int getPower();
    int getLevelMax();
    float getRange();
    float getSpeed();
    int getCost();
    char getDescrption();


protected:
    int power;
    int cost;
    float range;
    float speed;
    int levelMax;
    char description;
    sf::Texture texture;
    static sf::Sprite gunT;

    void loadTexture();
};

#endif // GUNTOWER_H
