#include "poisontower.h"

poisonTower::poisonTower()
{
    power = 1;
    cost = 200;
    range = 15.0f;
    speed = 5.0f;
    levelMax = 10;
    description = 'd';
    loadTexture();

}

int poisonTower::getCost(){ return cost;}
int poisonTower::getPower(){ return power;}
int poisonTower::getLevelMax(){ return levelMax;}
float poisonTower::getSpeed(){ return speed;}
float poisonTower::getRange(){ return range;}
char poisonTower::getDescrption(){ return description;}

void poisonTower::loadTexture(){
    //texture = ;
    poisonT.setTexture(texture);
}
