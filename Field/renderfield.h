#ifndef RENDERFIELD_H
#define RENDERFIELD_H

#include <SFML/Graphics.hpp>
#include <iostream>

class RenderField
{
public:
    RenderField();
    ~RenderField();

    void setSpriteOnMap();

    static sf::Sprite grassSprite;
    static sf::Sprite dirtSprite;
    static sf::Sprite waterSprite;

protected:
    sf::Texture texture;
};

#endif // RENDERFIELD_H
