/*
Author: Zachary L. Johnson
Description: Create random generated keys and put them in a file for reading.
Version: 1.0
Date: 03/15/17
*/

//TODO: Fix the window handle to be held in main and not in the class itself

//READLIST: Global variable appropriate uses.
#include <iostream>
#include <cstdlib>
#include <string>
#include "FileHandler.h"
#include "DisplayWindow.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "config.h"
#include "ButtonObj.h"
#include "TextObj.h"

void fileHandlerDebugger( FileHandler* debuggerFile );

int main()
{


//========== File Handler Debugging ====================//

    // Create a FileHandler to test the file handler text addition and removal
    FileHandler* debugFile = new FileHandler();
    fileHandlerDebugger(debugFile);

//========= MAIN LOOP =========================

    // Window Parameters
    sf::Vector2f mainWindowSize = sf::Vector2f(500, 500);
    sf::Vector2f addButtonSize = sf::Vector2f(mainWindowSize.x/2, 50);
    sf::Vector2f removeButtonSize = sf::Vector2f(mainWindowSize.x/2, 50);
    int buttonBoarderSize = 1;

    sf::Vector2i mousePosition;
    std::string holdString;
    int holdValue;

    DisplayWindow* mainWindow = new DisplayWindow();
    mainWindow->create(sf::VideoMode(mainWindowSize.x, mainWindowSize.y), "My Program", sf::Style::Close);
    mainWindow->setPosition(sf::Vector2i(0,0));

    // Add font for text
    sf::Font font;

    if(font.loadFromFile("ClearSans-Regular.ttf"))
    {

        debugFile->addTextToFile("Loaded Text");

    }else
    {

        debugFile->addTextToFile("ERROR: Font Not Loaded");

    }

    // Build mainWindow Display items

    // ADD BUTTONS
    ButtonObj* addButton = new ButtonObj();
    addButton->setSize(addButtonSize);
    addButton->setPosition(buttonBoarderSize, mainWindow->getSize().y - addButtonSize.y - buttonBoarderSize);
    addButton->setFillColor(sf::Color::White);
    addButton->setOutlineThickness(buttonBoarderSize);
    addButton->setOutlineColor(sf::Color::Blue);
    mainWindow->addButton(*addButton);

    ButtonObj* removeButton = new ButtonObj();
    removeButton->setSize(removeButtonSize);
    removeButton->setPosition(mainWindow->getSize().x - removeButtonSize.x - buttonBoarderSize, mainWindow->getSize().y - removeButtonSize.y - buttonBoarderSize);
    removeButton->setFillColor(sf::Color::White);
    removeButton->setOutlineThickness(buttonBoarderSize);
    removeButton->setOutlineColor(sf::Color::Blue);
    mainWindow->addButton(*removeButton);

    // ADD TEXTS
    TextObj* addButtonText = new TextObj();
    addButtonText->setFont(font);
    addButtonText->setStyle(sf::Text::Bold);
    addButtonText->setCharacterSize(16);
    addButtonText->setColor(sf::Color::Black);
    addButtonText->setString("add");
    addButtonText->setTextLocationCentered(addButton);
    mainWindow->addText(*addButtonText);


    TextObj* removeButtonText = new TextObj();
    removeButtonText->setFont(font);
    removeButtonText->setStyle(sf::Text::Bold);
    removeButtonText->setCharacterSize(16);
    removeButtonText->setColor(sf::Color::Black);
    removeButtonText->setString("remove");
    removeButtonText->setTextLocationCentered(removeButton);
    mainWindow->addText(*removeButtonText);

//////////// MAIN PROGRAM START //////////////////////////

    while (mainWindow->isOpen())
    {
        sf::Event event;
        while (mainWindow->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                mainWindow->close();
            }

            if (event.type == sf::Event::MouseButtonPressed)
            {

                mousePosition = sf::Mouse::getPosition();

                if(mainWindow->buttonClicked(mousePosition))
                {

                    std::cout << "CLICKED" << std::endl;
                    // Execute the function in the button that was clicked
                    ButtonObj* myButton = mainWindow->getButtonAtMouse(mousePosition);
                    myButton->startBtnFunction(AUTO_CLICKER);


                }


            }

        }

        // Draw to background
        mainWindow->clear(sf::Color::White);

        mainWindow->drawObjects();

        mainWindow->display();

    }



//========= FREE MEMORY =========================================//
// Make sure to call delete just incase you have things in the destructor that need to be done
// This can be writing to a log file in the destructor.

    //delete myMusic;
    delete mainWindow;


    return(0);
}

void fileHandlerDebugger( FileHandler* debuggerFile )
{

    //TODO: Honestly this function would be much better if static functions and variables for debugging.
    // Still using as a file handler but could be better as a debugger.

    std::string myAddition = "The first string added to the file";
    std::string myAdditionTwo = "add this too";
    std::string fileName = "debuggerfile";
    std::string fileType = ".txt";
    std::string testString;

    debuggerFile->setFileName(fileName);

    debuggerFile->deleteFile(); // Deletes the current fileName

    debuggerFile->addTextToFile(myAddition);
    debuggerFile->addTextToFile(myAdditionTwo);
    debuggerFile->addTextToFile(myAddition);
    debuggerFile->addTextToFile(myAdditionTwo);
    debuggerFile->addTextToFile(myAddition);
    debuggerFile->addTextToFile(myAdditionTwo);

    //debuggerFile->deleteBySearch(myAdditionTwo);
    testString = debuggerFile->peakTop();

    //debuggerFile->deleteBySearch(myAddition);

}


// LEFT OVER CODE FOR LATER /////////////////////////////////////////////////

//============= OLD CODE FROM EXPERIMENTING ========== //////

//========== SFML Audio library music playing ===========================//

//    Use the music class

//    sf::Music* myMusic = new sf::Music();
//    myMusic->openFromFile("mymusic.flac");
//    myMusic->play();
