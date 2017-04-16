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

    DisplayWindow* mainWindow = new DisplayWindow(500, 500);
    sf::RenderWindow* mainWindowHandle = mainWindow->getHandle();
    mainWindowHandle->clear(sf::Color::White);
    mainWindowHandle->setTitle("");
    mainWindowHandle->setPosition(sf::Vector2i(0,0));

    // Build the main windows buttons
    ButtonInformation* displayButton = new ButtonInformation();
    displayButton->width = 100;
    displayButton->height = 50;
    displayButton->xPos = 100;
    displayButton->yPos = 100;
    displayButton->rectangleObject = new sf::RectangleShape(sf::Vector2f(displayButton->width,displayButton->height));
    displayButton->rectangleObject->setOutlineColor(sf::Color::Black);
    displayButton->rectangleObject->setPosition(displayButton->xPos, displayButton->yPos);
    mainWindow->addButton(*displayButton);

    ButtonInformation* musicButton = new ButtonInformation();
    musicButton->width = 100;
    musicButton->height = 50;
    musicButton->xPos = 300;
    musicButton->yPos = 100;
    musicButton->rectangleObject = new sf::RectangleShape(sf::Vector2f(musicButton->width,musicButton->height));
    musicButton->rectangleObject->setOutlineColor(sf::Color::Black);
    musicButton->rectangleObject->setPosition(musicButton->xPos, musicButton->yPos);
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
                debugFile->addTextToFile(mousePosition.x);
                debugFile->addTextToFile(mousePosition.y);

                if(mainWindow->buttonClicked(mousePosition))
                {

                    debugFile->addTextToFile("buttonClicked");

                }


            }

        }

        // Draw to background
        mainWindowHandle->clear(sf::Color::Black);

        mainWindow->drawObjects();

        mainWindowHandle->display();

    }



//========= FREE MEMORY =========================================//
// Make sure to call delete just incase you have things in the destructor that need to be done
// This can be writing to a log file in the destructor.

    //delete myMusic;
    delete mainWindow;
    delete displayButton;




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
