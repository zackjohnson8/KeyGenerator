#include "ButtonObj.h"

int ButtonObj::getWidth()
{

    return this->getSize().x;

}

int ButtonObj::getHeight()
{

    return this->getSize().y;

}

void ButtonObj::setBtnFunction(const ButtonFunct pFunction)
{



}

void ButtonObj::addTask(const ButtonFunct pFunction, DisplayWindow& pHandle)
{

    switch(pFunction)
    {
        case ADD_TASK:
            // create a task for the mainWindow to draw
            // open a new window to collect all the data
            break;

        default:
            std::cout << "addTask default was called" << std::endl;
            break;


    }

}






