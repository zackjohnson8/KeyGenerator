#ifndef DISPLAYWINDOW_H
#define DISPLAYWINDOW_H

#include <cstdlib>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Sprite.h"
#include "FileHandler.h"
#include "ButtonObj.h"
#include "TextObj.h"
#include "TaskObj.h"

class DisplayWindow : public sf::RenderWindow
{

public:

    void drawObjects();
    void addButton(ButtonObj& newButton);
    void addText(TextObj& pText);
    void addTask(TaskObj& pTask);

    ButtonObj* getButtonAtMouse(sf::Vector2i&);

    bool buttonClicked(sf::Vector2i&);

private:

    std::vector<TextObj> textList;
    std::vector<ButtonObj> buttonList;
    std::vector<TaskObj> taskList;

};

#endif
