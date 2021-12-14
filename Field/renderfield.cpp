#include "renderfield.h"

sf::Sprite RenderField::grassSprite;
sf::Sprite RenderField::dirtSprite;
sf::Sprite RenderField::waterSprite;

RenderField::RenderField() {
}

RenderField::~RenderField() {}

void RenderField::setSpriteOnMap() {

    texture.loadFromFile("C:/Qt/Projects/TOWERDEF/Assets/Background/tileset.png");

    grassSprite.setTexture(texture);
    grassSprite.setTextureRect(sf::IntRect(4 * 48, 3 * 48, 48, 48));

    dirtSprite.setTexture(texture);
    dirtSprite.setTextureRect(sf::IntRect(5 * 48, 3 * 48, 48, 48));

    waterSprite.setTexture(texture);
    waterSprite.setTextureRect(sf::IntRect(6 * 48, 3 * 48, 48, 48));

    grassSprite.setPosition(0, 0);
    dirtSprite.setPosition(48, 48);
    waterSprite.setPosition(96, 96);
}
