#ifndef POISONTOWER_H
#define POISONTOWER_H
#include "tower.h"
#include <SFML/Graphics.hpp>


class poisonTower : public Tower
{
public:
    poisonTower();
    ~poisonTower();

    int getPower();
    int getLevelMax();
    float getRange();
    float getSpeed();
    int getCost();
    char getDescrption();



protected:
    int power;
    float range;
    float speed;
    int levelMax;
    int cost;
    char description;
    sf::Texture texture;
    static sf::Sprite poisonT;

    void loadTexture();
};

#endif // POISONTOWER_H
