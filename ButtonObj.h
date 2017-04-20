#ifndef BUTTONOBJ_H
#define BUTTONOBJ_H

#include <cstdlib>
#include <iostream>
#include <SFML/Graphics.hpp>

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
    void addTask(const ButtonFunct);

private:

    ButtonFunct BtnFunctionality;


};

#endif
