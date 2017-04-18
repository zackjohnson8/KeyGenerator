#ifndef DISPLAYWINDOW_H
#define DISPLAYWINDOW_H

#include <cstdlib>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Sprite.h"
#include "FileHandler.h"
#include "ButtonObj.h"


class DisplayWindow : public sf::RenderWindow
{

public:

    void drawObjects();
    void addButton(ButtonObj& newButton);
    ButtonObj* getButtonAtMouse(sf::Vector2i&);

    bool buttonClicked(sf::Vector2i&);

private:

    std::vector<ButtonObj> buttonList;

};

#endif
