#include "canontower.h"

canonTower::canonTower()
{
    power = 4;
    cost = 400;
    range = 5.0f;
    speed = 1.0f;
    levelMax = 10;
    description = 'd';
    loadTexture();
}

int canonTower::getCost(){ return cost;}
int canonTower::getPower(){ return power;}
int canonTower::getLevelMax(){ return levelMax;}
float canonTower::getSpeed(){ return speed;}
float canonTower::getRange(){ return range;}
char canonTower::getDescrption(){ return description;}

void canonTower::loadTexture(){
    //texture = ;
    canonT.setTexture(texture);
}
