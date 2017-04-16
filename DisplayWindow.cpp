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

void DisplayWindow::addButton(ButtonInformation* newButton)
{

    mainWindow->draw(*(newButton->rectangleObject));

}
