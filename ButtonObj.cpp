#include "ButtonObj.h"

ButtonObj::ButtonObj()
{

    width = 0;
    height = 0;
    xPos = 0;
    yPos = 0;
    rectObject = NULL;


}

ButtonObj::ButtonObj(int setWidth, int setHeight, int setXPos, int setYPos)
{

    width = setWidth;
    height = setHeight;
    xPos = setXPos;
    yPos = setYPos;
    rectObject = new sf::RectangleShape(sf::Vector2f(setWidth, setHeight));
    rectObject->setPosition(xPos, yPos);

}

ButtonObj::~ButtonObj()
{


}

sf::RectangleShape* ButtonObj::getRectHandle()
{


    return rectObject;

}

int ButtonObj::getWidth()
{

    return width;

}

int ButtonObj::getHeight()
{

    return height;

}

int ButtonObj::getXPos()
{

    return xPos;

}

int ButtonObj::getYPos()
{

    return yPos;

}

void ButtonObj::setButtonColor(const sf::Color buttonColor)
{

    rectObject->setFillColor(buttonColor);

}
