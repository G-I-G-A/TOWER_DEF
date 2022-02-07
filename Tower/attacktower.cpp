#include "attacktower.h"

attackTower::attackTower()
{
    power = 3;
    cost = 100;
    range = 10.0f;
    speed = 2.0f;
    levelMax = 10;
    description = 'd';
    loadTexture();
}

int attackTower::getCost(){ return cost;}
int attackTower::getPower(){ return power;}
int attackTower::getLevelMax(){ return levelMax;}
float attackTower::getSpeed(){ return speed;}
float attackTower::getRange(){ return range;}
char attackTower::getDescrption(){ return description;}

void attackTower::loadTexture(){
    //texture = ;
    attackT.setTexture(texture);
    //trouver la localisation souris
}
