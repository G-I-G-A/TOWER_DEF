#include "freezetower.h"

freezeTower::freezeTower()
{
    power = 1;
    cost = 200;
    range = 15.0f;
    speed = 2.0f;
    levelMax = 10;
    description = 'd';
    loadTexture();
}

int freezeTower::getCost(){ return cost;}
int freezeTower::getPower(){ return power;}
int freezeTower::getLevelMax(){ return levelMax;}
float freezeTower::getSpeed(){ return speed;}
float freezeTower::getRange(){ return range;}
char freezeTower::getDescrption(){ return description;}

void freezeTower::loadTexture(){
    //texture = ;
    freezeT.setTexture(texture);
}
