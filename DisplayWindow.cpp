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
        buttonXPos = buttonList.at(x).getXPos();
        buttonYPos = buttonList.at(x).getYPos();
        buttonWidth = buttonList.at(x).getWidth();
        buttonHeight = buttonList.at(x).getHeight();
        windowPosition = mainWindow->getPosition();

        //mainWindow->titlebar

//        std::cout << (mousePosition.y - windowPosition.y - titleBarSize) << " " << buttonYPos
//        << " " << (mousePosition.y - windowPosition.y - titleBarSize) << " "
//         << buttonHeight + buttonYPos << std::endl;

        // Use said data to determine if mousePosition is over this spot
        if(
            ((mousePosition.x - windowPosition.x + 1) > buttonXPos && (mousePosition.x - windowPosition.x) < (buttonWidth + buttonXPos + 2))
            && ((mousePosition.y - windowPosition.y - titleBarSize) > buttonYPos && (mousePosition.y - windowPosition.y - titleBarSize) < (buttonHeight + buttonYPos + 1))
          )
        {

            std::cout << "Button clicked" << std::endl;
            return true;

        }


    }

    return false;

}

void DisplayWindow::drawObjects()
{

    for(int x = 0; x < buttonList.size(); x++)
    {

        mainWindow->draw(*(buttonList.at(x).getRectHandle()));

    }
}





























