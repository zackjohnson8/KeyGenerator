#ifndef BUTTONOBJ_H
#define BUTTONOBJ_H

#include <cstdlib>
#include <iostream>
#include <SFML/Graphics.hpp>

class ButtonObj
{

public:
    ButtonObj();
    ButtonObj(int setWidth, int setHeight, int setXPos, int setYPos);
    ~ButtonObj();

    int getWidth();
    int getHeight();
    int getXPos();
    int getYPos();
    sf::RectangleShape* getRectHandle();

    void setButtonColor(sf::Color& buttonColor);

private:
    sf::RectangleShape* rectObject;
    int width;
    int height;
    int xPos;
    int yPos;


};

#endif
