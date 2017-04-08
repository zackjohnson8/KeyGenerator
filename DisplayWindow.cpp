#include "DisplayWindow.h"

DisplayWindow::DisplayWindow(int width, int height)
{

    sf::Vector2u windowSize(width, height);

    windowWidth = width;
    windowHeight = height;
    mainWindow.setSize(windowSize);

    windowColor.a = 240;
    windowColor.b = 240;
    windowColor.g = 240;

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
