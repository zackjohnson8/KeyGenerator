#ifndef BUTTONOBJ_H
#define BUTTONOBJ_H

#include <cstdlib>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "DisplayWindow.h"

enum ButtonFunct
{

    ADD_TASK


};

class ButtonObj : public sf::RectangleShape
{

public:

    int getWidth();
    int getHeight();

    void setBtnFunction(const ButtonFunct);
    void addTask(const ButtonFunct pFunction, DisplayWindow& pHandle);

private:

    ButtonFunct BtnFunctionality;


};



#endif
