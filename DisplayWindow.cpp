#include "DisplayWindow.h"

DisplayWindow::DisplayWindow(int width, int height)
{

    mainWindow = new sf::RenderWindow(sf::VideoMode(width, height), "My Program", sf::Style::Close);

    windowWidth = width;
    windowHeight = height;
    visibleWindow = true;

}

DisplayWindow::~DisplayWindow()
{

    delete mainWindow;

}

sf::RenderWindow* DisplayWindow::getHandle()
{

    return mainWindow;

}

void DisplayWindow::showWindow(bool status)
{

    visibleWindow = status;

}

void DisplayWindow::setPosition()
{



}

void DisplayWindow::close()
{


    mainWindow->close();

}

bool DisplayWindow::isOpen()
{

    return mainWindow->isOpen();

}

bool DisplayWindow::pollEvent(sf::Event& e)
{


    return mainWindow->pollEvent(e);


}

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
        windowPosition = mainWindow->getPosition();

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
        windowPosition = mainWindow->getPosition();

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

    for(int x = 0; x < buttonList.size(); x++)
    {

        mainWindow->draw(*(buttonList.at(x).getRectHandle()));

    }

}





























