#pragma once

class Game{

    public:
    const short int SCREEN_WIDTH = 600;
    const short int SCREEN_HEIGHT = 600;
    const short int SCALE = 10;
    const short int H_TILES_NUM = SCREEN_WIDTH/SCALE;
    const short int V_TILES_NUM = SCREEN_HEIGHT/SCALE;
    Game();
};