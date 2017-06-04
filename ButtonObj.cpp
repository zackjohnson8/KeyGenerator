#include "ButtonObj.h"

int ButtonObj::getWidth()
{

    return this->getSize().x;

}

int ButtonObj::getHeight()
{

    return this->getSize().y;

}

void ButtonObj::setTask(const ButtonFunct pFunction)
{

    BtnFunctionality = pFunction;

}

ButtonFunct ButtonObj::getBtnFunction()
{

    return BtnFunctionality;

}

void ButtonObj::createTask()
{



}






