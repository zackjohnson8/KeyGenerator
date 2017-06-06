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

    _btnFunctionality = pFunction;

}

ButtonFunct ButtonObj::getBtnFunction()
{

    return _btnFunctionality;

}

void ButtonObj::createTask()
{



}

void ButtonObj::setButtonText(std::string& pText)
{






}






