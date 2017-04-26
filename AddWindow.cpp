#include "AddWindow.h"

AddWindow::AddWindow(sf::Font& pFont)
{


    _font = pFont;

    // Create the buttons and text for those buttons.
    // Later you'll need to create locations for people to input data.
    std::string _taskTitle = "Title";
    std::string _taskDescription = "Description";
    int buttonBoarderSize = 2;
    int bottomBuffer = 15;
    int sideBuffer = 75;

    _taskGetTitle = "";
    _taskGetDescription = "";

    // Create the buttons
    ButtonObj* okButton = new ButtonObj();
    ButtonObj* cancelButton = new ButtonObj();

    okButton->setSize(sf::Vector2f(400/4,50));
    okButton->setPosition(buttonBoarderSize + 75 , 400 - 50 - bottomBuffer );
    okButton->setFillColor(sf::Color::White);
    okButton->setOutlineThickness(buttonBoarderSize);
    okButton->setOutlineColor(sf::Color(0,157,247,255));
    // TODO ADD TASK HERE
    addButton(*okButton);

    cancelButton->setSize(sf::Vector2f(400/4,50));
    cancelButton->setPosition(400 - 200 - buttonBoarderSize + 25 , 400 - 50 - bottomBuffer);
    cancelButton->setFillColor(sf::Color::White);
    cancelButton->setOutlineThickness(buttonBoarderSize);
    cancelButton->setOutlineColor(sf::Color(0,157,247,255));
    // TODO ADD TASK HERE
    addButton(*cancelButton);

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
