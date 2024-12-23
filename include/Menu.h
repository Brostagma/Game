#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "Input.h"
#include "Core.h"

class Menu {
private:
    Input input;
    void mainRegionSelected();
    void exampleRegion1();
    void exampleRegion2();
public:
    void welcomeGame();
    void mainRegion();
    
};


#endif