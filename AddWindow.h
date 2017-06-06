#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <cstdlib>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "FileHandler.h"
#include "ButtonObj.h"
#include "TextObj.h"
#include "TaskObj.h"
//#include <string>

class AddWindow : public sf::RenderWindow
{

public:

    AddWindow(sf::Font&);
    void drawObjects();
    ButtonObj* getButtonAtMouse(sf::Vector2i&);
    bool buttonClicked(sf::Vector2i&);

private:

    void addButton(ButtonObj& newButton);
    void addText(TextObj& pText);

    std::vector<TextObj> _textList;
    std::vector<ButtonObj> _buttonList;

    std::string _taskGetTitle;
    std::string _taskGetDescription;

    sf::Font _font;


};

#endif
