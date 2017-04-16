#include "DisplayWindow.h"

DisplayWindow::DisplayWindow(int width, int height)
{

    sf::Vector2u windowSize(width, height);
    mainWindow = new sf::RenderWindow();

    windowWidth = width;
    windowHeight = height;
    visibleWindow = true;
    mainWindow->setSize(windowSize);

    mainWindow->create(sf::VideoMode(width, height), "");

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

void DisplayWindow::refreshWindow()
{

    //mainWindow->clear(sf::Color::White); // keeps redrawing it as its open
    mainWindow->display();


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

void DisplayWindow::addButton(ButtonInformation& newButton)
{

    buttonList.push_back(newButton);

}

bool DisplayWindow::buttonClicked(sf::Vector2i& mousePosition)
{

    int buttonXPos = 0;
    int buttonYPos = 0;
    int buttonWidth = 0;
    int buttonHeight = 0;

    for(int x = 0; x < buttonList.size(); x++)
    {

        // Check the current button on top then push top to button of vector
        buttonXPos = buttonList.at(x).xPos;
        buttonYPos = buttonList.at(x).yPos;
        buttonWidth = buttonList.at(x).width;
        buttonHeight = buttonList.at(x).height;

        // Use said data to determine if mousePosition is over this spot
        if(
            (mousePosition.x > buttonXPos && mousePosition.x < buttonWidth)
            && (mousePosition.y > buttonYPos && mousePosition.y < buttonHeight)
          )
        {


            return true;

        }


    }

    return false;

}




























