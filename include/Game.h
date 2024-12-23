#ifndef GAME_H
#define GAME_H

#include "Core.h"
#include "Menu.h"

class Game {
public:
    Game();
    ~Game() = default;

private:
    // methods
    void loop();
};
#endif