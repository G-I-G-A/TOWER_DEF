#ifndef TOWER_H
#define TOWER_H
#include <vector>


class Tower
{
public:
    Tower();
    virtual ~Tower();

    int level;
    int value;

    bool isActive;

    virtual void upLevel(int level, int levelMax);
    virtual void setPosition(std::vector<float> position);

    //implementer un draw de sprite
};

#endif // TOWER_H
