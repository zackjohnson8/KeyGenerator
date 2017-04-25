#include "AddWindow.h"

AddWindow::AddWindow(sf::Font& pFont)
{

    this->setSize(sf::Vector2u(400,400));

    _font = pFont;

    // Create the buttons and text for those buttons.
    // Later you'll need to create locations for people to input data.
    _taskTitle = "Title";
    _taskDescription = "Description";

    _taskGetTitle = "";
    _taskGetDescription = "";

    // place _taskTitle and _taskDescription
    TextObj* textTitle = new TextObj();
    TextObj* textDescription = new TextObj();

    textTitle->setFont(pFont);
    textTitle->setCharacterSize(16);
    textTitle->setColor(sf::Color::Black);
    textTitle->setString(_taskTitle);
    textTitle->setPosition(sf::Vector2f(50, 50));

    textDescription->setFont(pFont);
    textDescription->setCharacterSize(16);
    textDescription->setColor(sf::Color::Black);
    textDescription->setString(_taskDescription);
    textDescription->setPosition(sf::Vector2f(50, 100));

    addText(*textTitle);
    addText(*textDescription);

//    this->create(sf::VideoMode(this->getSize().x, this->getSize().y), "Add Task", sf::Style::Close);
    this->create(sf::VideoMode(400,400), "Add Task", sf::Style::Close);

}

void AddWindow::addButton(ButtonObj& newButton)
{

    buttonList.push_back(newButton);

}

bool AddWindow::buttonClicked(sf::Vector2i& mousePosition)
{

    int titleBarSize = 26;

    sf::Vector2i windowPosition;
    int buttonXPos = 0;
    int buttonYPos = 0;
    int buttonWidth = 0;
    int buttonHeight = 0;

    for(int x = 0; x < buttonList.size(); x++)
    {

        // Check the current button on top then push top to button of vector
        buttonXPos = buttonList.at(x).getPosition().x;
        buttonYPos = buttonList.at(x).getPosition().y;
        buttonWidth = buttonList.at(x).getSize().x;
        buttonHeight = buttonList.at(x).getSize().y;
        windowPosition = this->getPosition();

        // Use said data to determine if mousePosition is over this spot
        if(
            ((mousePosition.x - windowPosition.x + 1) > buttonXPos && (mousePosition.x - windowPosition.x) < (buttonWidth + buttonXPos + 2))
            && ((mousePosition.y - windowPosition.y - titleBarSize) > buttonYPos && (mousePosition.y - windowPosition.y - titleBarSize) < (buttonHeight + buttonYPos + 1))
          )
        {

            return true;

        }


    }

    return false;

}

ButtonObj* AddWindow::getButtonAtMouse(sf::Vector2i& mousePosition)
{

    int titleBarSize = 26;

    sf::Vector2i windowPosition;
    int buttonXPos = 0;
    int buttonYPos = 0;
    int buttonWidth = 0;
    int buttonHeight = 0;

    for(int x = 0; x < buttonList.size(); x++)
    {

        // Check the current button on top then push top to button of vector
        buttonXPos = buttonList.at(x).getPosition().x;
        buttonYPos = buttonList.at(x).getPosition().y;
        buttonWidth = buttonList.at(x).getSize().x;
        buttonHeight = buttonList.at(x).getSize().y;
        windowPosition = this->getPosition();

        // Use said data to determine if mousePosition is over this spot
        if(
            ((mousePosition.x - windowPosition.x + 1) > buttonXPos && (mousePosition.x - windowPosition.x) < (buttonWidth + buttonXPos + 2))
            && ((mousePosition.y - windowPosition.y - titleBarSize) > buttonYPos && (mousePosition.y - windowPosition.y - titleBarSize) < (buttonHeight + buttonYPos + 1))
          )
        {

            return &(buttonList.at(x));

        }


    }

    return NULL;

}

void AddWindow::drawObjects()
{

    int count;


    for(count = 0; count < buttonList.size(); count++)
    {

        this->draw(buttonList.at(count));

    }


    for(count = 0; count < textList.size(); count++)
    {

        this->draw(textList.at(count));

    }


}

void AddWindow::addText(TextObj& pText)
{

    textList.push_back(pText);

}
