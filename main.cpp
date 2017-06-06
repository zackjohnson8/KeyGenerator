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
#include <SFML/Network.hpp>
#include "config.h"
#include "ButtonObj.h"
#include "TextObj.h"
#include "AddWindow.h"

//Global variables
sf::Font MAIN_FONT;
const int BUTTON_BORDER_SIZE = 2;
const int BOTTOM_BUFFER_SIZE = 15;
const int SIDE_BUFFER_SIZE = 100;
const int MAIN_WINDOW_WIDTH = 500;
const int MAIN_WINDOW_HEIGHT = 500;

// Function Declaration
void fileHandlerDebugger( FileHandler* debuggerFile );
void loadFont();
TaskObj* addTask();
void buildUIMainWindow(DisplayWindow*, ButtonObj*, ButtonObj*, TextObj*, TextObj*);

// MAIN //////////////////
int main()
{


//========== File Handler Debugging ====================//

    // Create a FileHandler to test the file handler text addition and removal
    FileHandler* debugFile = new FileHandler();
    fileHandlerDebugger(debugFile);

//========= MAIN LOOP =========================

    // Window Parameters
    sf::Vector2i mousePosition;
    TaskObj* holdTask = NULL;

    // Add MAIN_FONT for text
    loadFont();

    // Build mainWindow Display items ///////////////////////////////////////////////////
    DisplayWindow* mainWindow = new DisplayWindow();
    mainWindow->create(sf::VideoMode(MAIN_WINDOW_WIDTH, MAIN_WINDOW_HEIGHT), "My Program", sf::Style::Close);

    ButtonObj* addButton = new ButtonObj();
    ButtonObj* removeButton = new ButtonObj();
    TextObj* addButtonText = new TextObj();
    TextObj* removeButtonText = new TextObj();
    buildUIMainWindow(mainWindow, addButton, removeButton, addButtonText, removeButtonText);

    // ADD BUTTONS



//////////// MAIN PROGRAM START //////////////////////////

    while (mainWindow->isOpen())
    {

        // Events for window
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

                            holdTask = addTask();

                            // Making sure that addTask window wasn't just closed out of or cancel button clicked
                            if(holdTask != NULL)
                            {
                                mainWindow->addTask(*holdTask);
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

TaskObj* addTask()
{

    TaskObj* newTaskHolder = NULL;
    AddWindow* addEventWindow = NULL;
    sf::Vector2i mousePosition;
    sf::Event event;

    std::string defaultTitle = "Default Title";
    std::string defaultDescription = "By giving this task a description I can determine specific information.";

    newTaskHolder = new TaskObj();

    // Collect all the data
    addEventWindow = new AddWindow(MAIN_FONT);

    while(addEventWindow->isOpen())
    {
        while(addEventWindow->pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                // do nothing with the data since the user exited with the x
                addEventWindow->close();
                return NULL;

            }


            if (event.type == sf::Event::MouseButtonPressed)
            {

                mousePosition = sf::Mouse::getPosition();

                if(addEventWindow->buttonClicked(mousePosition))
                {

                    // Execute the function in the button that was clicked
                    ButtonObj* myButton = addEventWindow->getButtonAtMouse(mousePosition);

                    switch(myButton->getBtnFunction())
                    {
                        // Create a task and send it to the main window
                        case ADD_TASK:

                            newTaskHolder->setSize(sf::Vector2f(500 - 4, 100));
                            newTaskHolder->setPosition(2, 2);
                            newTaskHolder->setFillColor(sf::Color::White);
                            newTaskHolder->setOutlineThickness(2);
                            newTaskHolder->setOutlineColor(sf::Color(0,157,247,255));



                            newTaskHolder->setTitle(defaultTitle);
                            newTaskHolder->setDescription(defaultDescription);

                            addEventWindow->close();
                            return newTaskHolder;

                            break;

                        // TODO: Not sure how to complete this
                        case CANCEL_TASK:

                            addEventWindow->close();
                            return NULL;
                            break;



                    }


                }


            }

        }

        addEventWindow->clear(sf::Color::White);
        addEventWindow->drawObjects();
        addEventWindow->display();


    }

    return NULL;

}

void loadFont()
{

    if(MAIN_FONT.loadFromFile("ClearSans-Regular.ttf"))
    {
    }else
    {
        std::cout << "ERROR: Font Not Loaded" << std::endl;

//        debugFile->addTextToFile("ERROR: Font Not Loaded");

    }

}

void buildUIMainWindow(DisplayWindow* pMainWindow, ButtonObj* pAddButton, ButtonObj* pRemoveButton, TextObj* pAddButtonText, TextObj* pRemoveButtonText)
{

    sf::Vector2f addButtonSize = sf::Vector2f(MAIN_WINDOW_WIDTH/4, 50);
    sf::Vector2f removeButtonSize = sf::Vector2f(MAIN_WINDOW_WIDTH/4, 50);

    pAddButton->setSize(addButtonSize);
    pAddButton->setPosition(BUTTON_BORDER_SIZE + SIDE_BUFFER_SIZE, pMainWindow->getSize().y - addButtonSize.y - BOTTOM_BUFFER_SIZE);
    pAddButton->setFillColor(sf::Color::White);
    pAddButton->setOutlineThickness(BUTTON_BORDER_SIZE);
    pAddButton->setOutlineColor(sf::Color(0,157,247,255));
    pAddButton->setTask(ADD_TASK);
    pMainWindow->addButton(*pAddButton);

    pRemoveButton->setSize(removeButtonSize);
    pRemoveButton->setPosition(pMainWindow->getSize().x - removeButtonSize.x - BUTTON_BORDER_SIZE - SIDE_BUFFER_SIZE, pMainWindow->getSize().y - removeButtonSize.y - BOTTOM_BUFFER_SIZE);
    pRemoveButton->setFillColor(sf::Color::White);
    pRemoveButton->setOutlineThickness(BUTTON_BORDER_SIZE);
    pRemoveButton->setOutlineColor(sf::Color(0,157,247,255));
    pRemoveButton->setTask(REMOVE_TASK);
    pMainWindow->addButton(*pRemoveButton);

    // ADD TEXTS
    pAddButtonText->setFont(MAIN_FONT);
    pAddButtonText->setStyle(sf::Text::Bold);
    pAddButtonText->setCharacterSize(16);
    pAddButtonText->setColor(sf::Color::Black);
    pAddButtonText->setString("add");
    pAddButtonText->setTextLocationCentered(pAddButton);
    pMainWindow->addText(*pAddButtonText);

    pRemoveButtonText->setFont(MAIN_FONT);
    pRemoveButtonText->setStyle(sf::Text::Bold);
    pRemoveButtonText->setCharacterSize(16);
    pRemoveButtonText->setColor(sf::Color::Black);
    pRemoveButtonText->setString("remove");
    pRemoveButtonText->setTextLocationCentered(pRemoveButton);
    pMainWindow->addText(*pRemoveButtonText);

}


