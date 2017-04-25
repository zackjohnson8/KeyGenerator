#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <cstdlib>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "FileHandler.h"
#include "ButtonObj.h"
#include "TextObj.h"
#include "TaskObj.h"

class AddWindow : public sf::RenderWindow
{

public:

    AddWindow();
    void drawObjects();
    void setFont(sf::Font);
    ButtonObj* getButtonAtMouse(sf::Vector2i&);
    bool buttonClicked(sf::Vector2i&);

private:

    void addButton(ButtonObj& newButton);
    void addText(TextObj& pText);

    std::vector<TextObj> textList;
    std::vector<ButtonObj> buttonList;

    sf::Font _font;


};

#endif
