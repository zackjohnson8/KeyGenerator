#ifndef DISPLAYWINDOW_H
#define DISPLAYWINDOW_H

#include <cstdlib>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Sprite.h"
#include "FileHandler.h"
#include "ButtonObj.h"


class DisplayWindow{

public:
    DisplayWindow(int width, int height);
    ~DisplayWindow();

    void showWindow(bool status);
    void close();
    bool isOpen();
    bool pollEvent(sf::Event& e);
    void drawObjects();
    void setPosition(); // TODO
    void addButton(ButtonObj& newButton);
    sf::RenderWindow* getHandle();

    bool buttonClicked(sf::Vector2i&);

private:
    int windowWidth;
    int windowHeight;
    bool visibleWindow;

    std::vector<ButtonObj> buttonList;

    sf::RenderWindow* mainWindow;
    sf::Color windowColor;

};

#endif
