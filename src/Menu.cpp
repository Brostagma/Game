#include "../include/Menu.h"

void Menu::welcomeGame() {
    std::cout << "=========================\n";
    std::cout << "    Welcome To The Game!   \n";
    std::cout << "=========================\n\n";
}

void Menu::mainRegion() {
    std::cout << "Player 1! \n";
    std::cout << "What do you want to do in Consol Valley?\n";
    std::cout << "Region 1! \n";
    std::cout << "Region 2! \n";
    std::cout << "Chose >> ";
    input.makeSelection();
    mainRegionSelected();
}

void Menu::mainRegionSelected() {
    switch (input.getSelection()) {
        case 1:
            exampleRegion1();
            break;
        case 2:
            exampleRegion2();
            break;
        case 3:
            std::cout << "Exit... \n";
            Core::setIsRun(false);
            break;
        default:
            std::cout << "Try Again... \n";
            break;
    }
}

// Regions *******************************************************

void Menu::exampleRegion1() {
    std::cout << "=========================\n";
    std::cout << "This is Region 1! \n";
    std::cout << "=========================\n";
}

void Menu::exampleRegion2() {
    std::cout << "=========================\n";
    std::cout << "This is Region 2! \n";
    std::cout << "=========================\n";
}