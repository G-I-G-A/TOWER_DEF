#include "freezetower.h"

freezeTower::freezeTower()
{
    power = 1;
    cost = 200;
    range = 15.0f;
    speedHit = 2.0f;
    slowDown = 50.0f;
    levelMax = 10;
    description = 'd';
    loadTexture();
}

int freezeTower::getCost(){ return cost;}
int freezeTower::getPower(){ return power;}
int freezeTower::getLevelMax(){ return levelMax;}
float freezeTower::getSpeedHit(){ return speedHit;}
float freezeTower::getSlowDown(){ return slowDown;}
float freezeTower::getRange(){ return range;}
char freezeTower::getDescrption(){ return description;}

void freezeTower::loadTexture(){
    texture.loadFromFile("C:/Users/julie/Documents/Exos/TOWER_DEF/Assets/Towers/freeze.png");
    freezeT.setTexture(texture);
}
