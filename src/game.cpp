#include "game.h"
#include <raylib.h>

Game::Game()
{
    worldMatrix = std::vector<sint>(H_TILES_NUM * V_TILES_NUM, 0);
}

int Game::Coord(int x, int y)
{
    return x + y * H_TILES_NUM;
}

void Game::DrawWorldMatrix()
{
    for (int y = 0; y < V_TILES_NUM; y++)
    {
        for (int x = 0; x < H_TILES_NUM; x++)
        {
            if(worldMatrix[Coord(x,y)] == AIR){
                DrawRectangle(x*SCALE,y*SCALE,SCALE,SCALE,WHITE);
            }
        }
    }
}