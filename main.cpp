#include <iostream>
#include "Game/game.h"
#include "Field/field.h"
#include "Field/renderfield.h"

using namespace std;

int main()
{
    Field field;
    field.getTilesFromFile();
    RenderField map;
    map.setSpriteOnMap();
    Game game;
    game.Run();
    return (0);
}
