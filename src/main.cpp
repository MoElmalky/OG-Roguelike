#include <raylib.h>
#include "game.h"

int main()
{
    Game game = Game();

    game.InitGameWindow();
    
    game.RunGame();

    return 0;
}