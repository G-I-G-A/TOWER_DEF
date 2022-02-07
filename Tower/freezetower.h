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
    static sf::Sprite freezeT;

    void loadTexture();
};

#endif // FREEZETOWER_H
