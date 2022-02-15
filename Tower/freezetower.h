#ifndef FREEZETOWER_H
#define FREEZETOWER_H
#include "tower.h"
#include <SFML/Graphics.hpp>


class freezeTower : public Tower
{
public:
    freezeTower();
    ~freezeTower();

    int getPower();
    int getLevelMax();
    float getRange();
    float getSpeedHit();
    float getSlowDown();
    int getCost();
    char getDescrption();


protected:
    int power;
    int cost;
    float range;
    float speedHit;
    float slowDown;
    int levelMax;
    char description;
    sf::Texture texture;
    static sf::Sprite freezeT;

    void loadTexture();
};

#endif // FREEZETOWER_H
