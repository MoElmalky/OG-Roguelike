#pragma once
#include <vector>
#include <raylib.h>
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
    double previousTime = GetTime();    // Previous time measure
    double currentTime = 0.0;           // Current time measure
    double updateDrawTime = 0.0;        // Update + Draw time
    double waitTime = 0.0;              // Wait time (if target fps required)
    float deltaTime = 0.0f;             // Frame time (Update + Draw + Wait time)
    
    float timeCounter = 0.0f;           // Accumulative time counter (seconds)
    bool pause = false;                 // Pause control flag
    
    int targetFPS = 1000;  
};