#ifndef BUTTONOBJ_H
#define BUTTONOBJ_H

#include <cstdlib>
#include <iostream>
#include <SFML/Graphics.hpp>

enum ButtonFunct
{

    ADD_TASK,
    REMOVE_TASK,
    CANCEL_TASK

};

class ButtonObj : public sf::RectangleShape
{

public:

    int getWidth();
    int getHeight();

    void setTask(const ButtonFunct);
    ButtonFunct getBtnFunction();
    void createTask();


private:

    ButtonFunct BtnFunctionality;


};



#endif
