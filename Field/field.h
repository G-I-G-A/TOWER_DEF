#ifndef FIELD_H
#define FIELD_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>

class Field
{
public:
    Field();
    ~Field();
    void getTilesFromFile();
    void checkPutTower();
protected:
    std::string getTile;
    std::vector<char> allTiles;
    sf::Texture texture;
};

#endif // FIELD_H
