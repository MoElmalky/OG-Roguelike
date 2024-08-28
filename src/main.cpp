#include <raylib.h>
#include "game.h"

int main()
{

    Game game = Game();

    InitWindow(game.SCREEN_WIDTH, game.SCREEN_HEIGHT, "OG Roguelike");

    while (!WindowShouldClose())
    {
        
        BeginDrawing();
        ClearBackground(BLACK);
        game.DrawWorldMatrix();
        DrawFPS(10, 10);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}