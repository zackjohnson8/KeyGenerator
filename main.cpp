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

void fileHandlerDebugger( FileHandler* debuggerFile );

int main()
{


//========== File Handler Debugging ====================//

    // Create a FileHandler to test the file handler text addition and removal
    FileHandler* debugFile = new FileHandler();

    fileHandlerDebugger(debugFile);


//========= MAIN LOOP =========================

    // Window Parameters
    sf::Vector2i mousePosition;
    std::string holdString;
    int holdValue;

    DisplayWindow* mainWindow = new DisplayWindow();
    mainWindow->create(sf::VideoMode(500, 500), "My Program", sf::Style::Close);
    mainWindow->setPosition(sf::Vector2i(0,0));

    // Build mainWindow Display items

    // ADD / REMOVE BUTTONS
    ButtonObj* displayButton = new ButtonObj();
    displayButton->setSize(sf::Vector2f(100, 50));
    displayButton->setPosition(100, 100);
    displayButton->setFillColor(sf::Color::Black);
    displayButton->setOutlineThickness(5);
    displayButton->setOutlineColor(sf::Color::Blue);
    mainWindow->addButton(*displayButton);

    ButtonObj* musicButton = new ButtonObj();
    musicButton->setSize(sf::Vector2f(100, 50));
    musicButton->setPosition(300, 100);
    musicButton->setFillColor(sf::Color::Black);
    musicButton->setOutlineThickness(5);
    musicButton->setOutlineColor(sf::Color::Blue);
    mainWindow->addButton(*musicButton);



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
