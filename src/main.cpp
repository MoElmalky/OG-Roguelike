#include <raylib.h>
#include "game.h"

int main()
{
    Game *game = new Game();

    game->InitGameWindow();
    
    game->RunGame();

    delete game;

    return 0;
}