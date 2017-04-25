/*
Author: Zachary L. Johnson
Description: Create random generated keys and put them in a file for reading.
Version: 1.0
Date: 03/15/17
*/

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
#include "AddWindow.h"

void fileHandlerDebugger( FileHandler* debuggerFile );

int main()
{

    //TODO: Add functionality to buttons. Create a task class that handles collecting
    //      new task data then draw the tasks to screen.
    //
    //      Each task will need to inherit the rectangle class,


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
    //mainWindow->setPosition(sf::Vector2i(0,0));

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
    addButton->setBtnFunction(ADD_TASK);
    mainWindow->addButton(*addButton);

    ButtonObj* removeButton = new ButtonObj();
    removeButton->setSize(removeButtonSize);
    removeButton->setPosition(mainWindow->getSize().x - removeButtonSize.x - buttonBoarderSize, mainWindow->getSize().y - removeButtonSize.y - buttonBoarderSize);
    removeButton->setFillColor(sf::Color::White);
    removeButton->setOutlineThickness(buttonBoarderSize);
    removeButton->setOutlineColor(sf::Color::Blue);
    removeButton->setBtnFunction(REMOVE_TASK);
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

    TaskObj* newTaskHolder = NULL;
    AddWindow* addEventWindow = NULL;

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

                    // Execute the function in the button that was clicked
                    ButtonObj* myButton = mainWindow->getButtonAtMouse(mousePosition);

                    switch(myButton->getBtnFunction())
                    {
                        // Create a task and send it to the main window
                        case ADD_TASK:

                            newTaskHolder = new TaskObj();
                            // Collect all the data
                            addEventWindow = new AddWindow(font);

                            while(addEventWindow->isOpen())
                            {
                                while(addEventWindow->pollEvent(event))
                                {
                                    if(event.type == sf::Event::Closed)
                                    {
                                        // do nothing with the data since the user exited with the x
                                        addEventWindow->close();

                                    }



                                }

                                addEventWindow->clear(sf::Color::White);

                                addEventWindow->drawObjects();

                                addEventWindow->display();


                            }

                            break;

                        // TODO: Not sure how to complete this
                        case REMOVE_TASK:
                            break;



                    }


                }


            }

        }

        // Draw to background
        mainWindow->clear(sf::Color::White);

        mainWindow->drawObjects();

        mainWindow->display();

    }


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
