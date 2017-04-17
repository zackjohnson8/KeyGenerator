#ifndef BUTTONOBJ_H
#define BUTTONOBJ_H

#include <cstdlib>
#include <iostream>
#include <SFML/Graphics.hpp>

enum ButtonFunct
{

    AUTO_CLICKER


};

class ButtonObj : public sf::RectangleShape {

public:

    int getWidth();
    int getHeight();
    sf::RectangleShape* getRectHandle();

    void setBtnFunction(const ButtonFunct);

    void startBtnFunction(const ButtonFunct);

private:

    ButtonFunct BtnFunctionality;


};

#endif
