#ifndef DISPLAYWINDOW_H
#define DISPLAYWINDOW_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Sprite.h"

struct ButtonInformation
{

    sf::RectangleShape* rectangleObject;
    int width;
    int height;
    int xPos;
    int yPos;

};

class DisplayWindow{

public:
    DisplayWindow(int width, int height);
    ~DisplayWindow();

    void showWindow(bool status);
    void close();
    bool isOpen();
    bool pollEvent(sf::Event& e);
    void refreshWindow();
    void setPosition(); // TODO
    void addButton(ButtonInformation* newButton);

    sf::RenderWindow* getHandle();

private:
    int windowWidth;
    int windowHeight;
    bool visibleWindow;

    sf::RenderWindow* mainWindow;
    sf::Color windowColor;

};

#endif
