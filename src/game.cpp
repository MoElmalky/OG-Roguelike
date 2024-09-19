#include "game.h"
#include <raylib.h>

class Test : public GameObject{
public:

    Test(int x,int y) : GameObject(x,y){}

    void draw() const override {
        DrawCircle(posX,posY,10,WHITE);
    }

    void update() override {
        if(IsKeyPressed(KEY_A))
            posX -= 1;
        if(IsKeyPressed(KEY_D))
            posX += 1;
        if(IsKeyPressed(KEY_W))
            posY -= 1;
        if(IsKeyPressed(KEY_S))
            posY += 1;
    }

    ~Test() override {}
};

Game::Game()
{
    Test player = Test(50,50);
    gameObjects.push_back(&player);
}

Game::~Game()
{
    for (auto* obj : gameObjects) {
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
    for(auto *obj : gameObjects){
        obj->update();
    }
    BeginDrawing();
    ClearBackground(BLACK);
    for(const auto *obj : gameObjects){
        obj->draw();
    }
    DrawFPS(10, 10);
    EndDrawing();
    }
    CloseWindow();
}