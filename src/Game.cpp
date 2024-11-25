#include "../include/Game.h"

Game::Game() {
    Core::setIsRun(true);
    loop();
}

void Game::loop() {
    Menu menu;

    while (Core::isRun()) {
        menu.welcomeGame();
        break; // :&&
    }
}