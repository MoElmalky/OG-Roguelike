#include <raylib.h>

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "OG Roguelike");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawCircle(400,300,50,WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}