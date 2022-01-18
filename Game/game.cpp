#include "game.h"

using namespace std;

const sf::Time Game::TimePerFrame = sf::seconds(1.f/60.f);

Game::Game()
: MainWindow(sf::VideoMode(1600, 900), "Your Awesome Game!")
{
}

Game::~Game() {}

void Game::Run()
{
    sf::Clock clock;
    sf::Time timeSinceLastUpdate = sf::Time::Zero;

    while (MainWindow.isOpen())
    {
        timeSinceLastUpdate += clock.restart();
        while (timeSinceLastUpdate > TimePerFrame)
        {
            timeSinceLastUpdate -= TimePerFrame;
            processEvents();
            update(TimePerFrame);
        }
        render();
    }
}

void Game::processEvents()
{
    sf::Event event{};

    while (MainWindow.pollEvent(event))
    {
        switch (event.type)
        {
            case sf::Event::KeyPressed:
                handlePlayerInput(event.key.code, true);
                break;
            case sf::Event::KeyReleased:
                handlePlayerInput(event.key.code, false);
                break;
            case sf::Event::Closed:
                MainWindow.close();
                break;
            default:
                break;
        }

    }
}

void Game::update(sf::Time deltaTime)
{
    // TODO: Update your objects here
    // Example: Window.draw(mPlayer);
}

void Game::render()
{
    MainWindow.clear();

    for(unsigned long long i = 0; i < RenderField::allSprites.size(); ++i) {
        MainWindow.draw(RenderField::allSprites[i]);
    }

//    MainWindow.draw(RenderField::grassSprite);
//    MainWindow.draw(RenderField::dirtSprite);
//    MainWindow.draw(RenderField::waterSprite);

    MainWindow.display();
}

void Game::handlePlayerInput(sf::Keyboard::Key key, bool isPressed)
{
    // TODO: Key events for your game
    // Example:
    // if (key == sf::Keyboard::W)
    // {
    //     mIsMovingUp = isPressed;
    // }
}
