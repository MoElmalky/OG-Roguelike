#pragma once
#include <string>
#include <vector>
#include "gameObject.h"


class Game
{

public:
    Game();
    ~Game();
    void RunGame();
    void InitGameWindow();

private:
    const int SCREEN_WIDTH = 600;
    const int SCREEN_HEIGHT = 600;
    const char* GAME_NAME = "OG Roguelike";
    std::vector<GameObject*> gameObjects;
};