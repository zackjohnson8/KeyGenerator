#ifndef DISPLAYWINDOW_H
#define DISPLAYWINDOW_H

#include <cstdlib>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "FileHandler.h"
#include "ButtonObj.h"
#include "TextObj.h"
#include "TaskObj.h"

class DisplayWindow : public sf::RenderWindow
{

public:

    void drawObjects();
    void drawAddWindow();
    void addButton(ButtonObj& newButton);
    void addText(TextObj& pText);
    void addTask(TaskObj& pTask);
    void setFont(sf::Font);

    ButtonObj* getButtonAtMouse(sf::Vector2i&);

    bool buttonClicked(sf::Vector2i&);

private:

    std::vector<TextObj> _textList;
    std::vector<ButtonObj> _buttonList;
    std::vector<TaskObj> taskList;

    sf::Font _font;


};

#endif
