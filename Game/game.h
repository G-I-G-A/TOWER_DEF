#ifndef Game_H
#define Game_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "../Field/renderfield.h"

class Game
{
public:
    Game();
    ~Game();
    void Run();
    void processEvents();
    void update(sf::Time deltaTime);
    void render();
    void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

    sf::RenderWindow Window;

protected:
    static const sf::Time TimePerFrame;
};

#endif // Game_H
