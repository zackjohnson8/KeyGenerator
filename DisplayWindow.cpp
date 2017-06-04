#include "DisplayWindow.h"


void DisplayWindow::addButton(ButtonObj& newButton)
{

    buttonList.push_back(newButton);

}

bool DisplayWindow::buttonClicked(sf::Vector2i& mousePosition)
{

    int titleBarSize = 26;

    sf::Vector2i windowPosition;
    int buttonXPos = 0;
    int buttonYPos = 0;
    int buttonWidth = 0;
    int buttonHeight = 0;

    for(int x = 0; x < buttonList.size(); x++)
    {

        // Check the current button on top then push top to button of vector
        buttonXPos = buttonList.at(x).getPosition().x;
        buttonYPos = buttonList.at(x).getPosition().y;
        buttonWidth = buttonList.at(x).getSize().x;
        buttonHeight = buttonList.at(x).getSize().y;
        windowPosition = this->getPosition();

        // Use said data to determine if mousePosition is over this spot
        if(
            ((mousePosition.x - windowPosition.x + 1) > buttonXPos && (mousePosition.x - windowPosition.x) < (buttonWidth + buttonXPos + 2))
            && ((mousePosition.y - windowPosition.y - titleBarSize) > buttonYPos && (mousePosition.y - windowPosition.y - titleBarSize) < (buttonHeight + buttonYPos + 1))
          )
        {

            return true;

        }


    }

    return false;

}

ButtonObj* DisplayWindow::getButtonAtMouse(sf::Vector2i& mousePosition)
{

    int titleBarSize = 26;

    sf::Vector2i windowPosition;
    int buttonXPos = 0;
    int buttonYPos = 0;
    int buttonWidth = 0;
    int buttonHeight = 0;

    for(int x = 0; x < buttonList.size(); x++)
    {

        // Check the current button on top then push top to button of vector
        buttonXPos = buttonList.at(x).getPosition().x;
        buttonYPos = buttonList.at(x).getPosition().y;
        buttonWidth = buttonList.at(x).getSize().x;
        buttonHeight = buttonList.at(x).getSize().y;
        windowPosition = this->getPosition();

        // Use said data to determine if mousePosition is over this spot
        if(
            ((mousePosition.x - windowPosition.x + 1) > buttonXPos && (mousePosition.x - windowPosition.x) < (buttonWidth + buttonXPos + 2))
            && ((mousePosition.y - windowPosition.y - titleBarSize) > buttonYPos && (mousePosition.y - windowPosition.y - titleBarSize) < (buttonHeight + buttonYPos + 1))
          )
        {

            return &(buttonList.at(x));

        }


    }

    return NULL;

}

void DisplayWindow::drawObjects()
{

    int positionYTask = 2;
    int count;


    for(count = 0; count < buttonList.size(); count++)
    {

        this->draw(buttonList.at(count));

    }

    count = 0;
    while(count < taskList.size() && count < 4)
    {

        taskList.at(count).setPosition(sf::Vector2f(2, positionYTask));
        this->draw(taskList.at(count));
        positionYTask += taskList.at(count).getSize().y;
        count++;

    }

    for(count = 0; count < textList.size(); count++)
    {

        this->draw(textList.at(count));

    }


}

void DisplayWindow::addText(TextObj& pText)
{

    textList.push_back(pText);

}



void DisplayWindow::addTask(TaskObj& pTask)
{

    taskList.push_back(pTask);

}


void DisplayWindow::setFont(sf::Font pFont)
{

    _font = pFont;

}

























