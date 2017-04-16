#include "ButtonObj.h"

ButtonObj::ButtonObj()
{

    width = 0;
    height = 0;
    xPos = 0;
    yPos = 0;
    rectObject = NULL:

}

ButtonObj::ButtonObj(int setWidth, int setHeight, int setXPos, int setYPos)
{

    width = setWidth;
    height = setHeight;
    xPos = setXPos;
    yPos = setYPos;
    rectObject = new sf::RectangleShape(sf::Vector2f(setWidth, setHeight))

}

ButtonObj::~ButtonObj()
{

    delete rectObject();

}

sf::RectangleShape* getRectHandle()
{


    return rectObject;

}
