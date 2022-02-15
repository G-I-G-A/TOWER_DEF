#include "canontower.h"

canonTower::canonTower()
{
    power = 4;
    cost = 400;
    range = 5.0f;
    speedHit = 1.0f;
    levelMax = 10;
    description = 'd';
    loadTexture();
}

int canonTower::getCost(){ return cost;}
int canonTower::getPower(){ return power;}
int canonTower::getLevelMax(){ return levelMax;}
float canonTower::getSpeedHit(){ return speedHit;}
float canonTower::getRange(){ return range;}
char canonTower::getDescrption(){ return description;}

void canonTower::loadTexture(){
    texture.loadFromFile("C:/Users/julie/Documents/Exos/TOWER_DEF/Assets/Towers/canon.png");
    canonT.setTexture(texture);
}
