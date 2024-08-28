#pragma once

#include <vector>

#define AIR 0

typedef short int sint;

class Game
{

public:
    const sint SCREEN_WIDTH = 600;
    const sint SCREEN_HEIGHT = 600;
    const sint SCALE = 10;
    Game();
    void DrawWorldMatrix();

private:
    const sint H_TILES_NUM = SCREEN_WIDTH / SCALE;
    const sint V_TILES_NUM = SCREEN_HEIGHT / SCALE;
    std::vector<sint> worldMatrix;
    int Coord(int,int);
};