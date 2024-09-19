#include "game.h"
#include <iostream>

class Test : public GameObject{
public:

    Test(int x,int y) : GameObject(x,y){}

    void draw() const override {
        DrawCircle(posX,posY,10,WHITE);
    }

    void update(float dt) override {
        if(IsKeyPressed(KEY_A)){
            std::cout<<100*dt<<std::endl;
            posX -= 1000*dt;
        }
        if(IsKeyPressed(KEY_D)){
            std::cout<<100*dt<<std::endl;
            posX += 1000*dt;
        }
        if(IsKeyPressed(KEY_W)){
            std::cout<<100*dt<<std::endl;
            posY -= 1000*dt;
        }
        if(IsKeyPressed(KEY_S)){
            std::cout<<100*dt<<std::endl;
            posY += 1000*dt;
        }
            
    }

    ~Test() override {}
};

Game::Game()
{
    Test *player = new Test(50,50);
    gameObjects.push_back(player);
}

Game::~Game()
{
    for (auto obj : gameObjects) {
        delete obj;
    }
}

void Game::InitGameWindow()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, GAME_NAME);
}

void Game::RunGame()
{
    while (!WindowShouldClose())
    {
    for(auto obj : gameObjects){
        obj->update(deltaTime);
    }
    BeginDrawing();
    ClearBackground(BLACK);
    for(const auto obj : gameObjects){
        obj->draw();
    }
    DrawFPS(10, 10);
    EndDrawing();

    currentTime = GetTime();
    updateDrawTime = currentTime - previousTime;
        
    if (targetFPS > 0)
    {
        waitTime = (1.0f/(float)targetFPS) - updateDrawTime;
        if (waitTime > 0.0) 
        {
            WaitTime((float)waitTime);
            currentTime = GetTime();
            deltaTime = (float)(currentTime - previousTime);
        }
    }
    else deltaTime = (float)updateDrawTime;

    previousTime = currentTime;
    }
    CloseWindow();
}