#include "../include/Input.h"

void Input::makeSelection() {
    std::cin >> Input::selection;
}

void Input::setSelection(int value) {
    Input::selection = value;
}

int Input::getSelection() {
    return Input::selection;
}