#include "DisplayWindow.h"

DisplayWindow::DisplayWindow(int width, int height)
{

    sf::Vector2u windowSize(width, height);

    windowWidth = width;
    windowHeight = height;
    mainWindow.setSize(windowSize);

    mainWindow.create(sf::VideoMode(width, height), "");

}

DisplayWindow::~DisplayWindow()
{



}

void DisplayWindow::showWindow(bool status)
{

    mainWindow.clear(windowColor);
    mainWindow.display();

}

void DisplayWindow::close()
{


    mainWindow.close();

}

bool DisplayWindow::isOpen()
{

    return mainWindow.isOpen();

}

bool DisplayWindow::pollEvent(sf::Event& e)
{


    return mainWindow.pollEvent(e);


}
