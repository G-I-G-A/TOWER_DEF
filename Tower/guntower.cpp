#include "guntower.h"

gunTower::gunTower()
{
    power = 2;
    cost = 300;
    range = 20.0f;
    speed = 3.0f;
    levelMax = 10;
    description = 'd';
    loadTexture();
}

int gunTower::getCost(){ return cost;}
int gunTower::getPower(){ return power;}
int gunTower::getLevelMax(){ return levelMax;}
float gunTower::getSpeed(){ return speed;}
float gunTower::getRange(){ return range;}
char gunTower::getDescrption(){ return description;}

void gunTower::loadTexture(){
    //texture = ;
    gunT.setTexture(texture);
}
