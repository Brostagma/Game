#ifndef INPUT_H
#define INPUT_H

#include <iostream>

class Input {
private:
    int selection;
public:
    ~Input() = default;

    // Methods
    void makeSelection();

    // Setter
    void setSelection(int value);

    // Getter
    int getSelection();
};


#endif