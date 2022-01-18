#include <iostream>
#include "Game/game.h"
#include "Field/field.h"
#include "Field/renderfield.h"

using namespace std;

int main()
{
    //RenderField map;
    //map.setSpriteOnMap();
    Field field;
    field.getTilesFromFile();
    Game game;
    game.Run();
    return (0);
}
