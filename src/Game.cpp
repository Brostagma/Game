#include "../include/Game.h"

Game::Game() {
    Core::setIsRun(true);
    loop();
}

void Game::loop() {
    Menu menu;
    menu.welcomeGame();

    while (Core::isRun()) {
        menu.mainRegion();
        // break; // :&&
    }
}