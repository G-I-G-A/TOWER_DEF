#include "guntower.h"

gunTower::gunTower()
{
    power = 2;
    cost = 300;
    range = 20.0f;
    speedHit = 3.0f;
    levelMax = 10;
    description = 'd';
    loadTexture();
}

int gunTower::getCost(){ return cost;}
int gunTower::getPower(){ return power;}
int gunTower::getLevelMax(){ return levelMax;}
float gunTower::getSpeedHit(){ return speedHit;}
float gunTower::getRange(){ return range;}
char gunTower::getDescrption(){ return description;}

void gunTower::loadTexture(){
    texture.loadFromFile("C:/Users/julie/Documents/Exos/TOWER_DEF/Assets/Towers/gun.png");
    gunT.setTexture(texture);
}
