#include "tower.h"

Tower::Tower()
{
    level = 1;
    isActive = false;
}

void Tower::upLevel(int level, int levelMax)
{
    if (level < levelMax){
        level++;
    }
}

void Tower::setPosition(std::vector<float> position)
{

}
