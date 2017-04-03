/*
Author: Zachary L. Johnson
Description: Create random generated keys and put them in a file for reading.
Version: 1.0
Date: 03/15/17
*/

//TODO: Keep the file handler but create a debugger system for youself to use and change when needed.

//READLIST: Global variable appropriate uses.
#include <iostream>
#include <cstdlib>
#include <string>
#include "FileHandler.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "config.h"

const int WINDOW_WIDTH = 500;
const int WINDOW_HEIGHT = 500;

int main()
{


    std::string myAddition = "The first string added to the file";
    std::string myAdditionTwo = "add this too";
    std::string fileName = "debuggerfile";
    std::string fileType = ".txt";
    std::string testString;

//========== File Handler Debugging ====================//

    // Create a FileHandler to test the file handler text addition and removal
    FileHandler* debuggerFile = new FileHandler();

    debuggerFile->setFileName(fileName);

    debuggerFile->deleteFile(); // Deletes the current fileName

    debuggerFile->addTextToFile(myAddition);
    debuggerFile->addTextToFile(myAdditionTwo);
    debuggerFile->addTextToFile(myAddition);
    debuggerFile->addTextToFile(myAdditionTwo);
    debuggerFile->addTextToFile(myAddition);
    debuggerFile->addTextToFile(myAdditionTwo);

    debuggerFile->deleteBySearch(myAdditionTwo);
    testString = debuggerFile->peakTop();

    //debuggerFile->deleteBySearch(myAddition);

//========== SFML Circle Drawing ====================================//

    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SFML works!");
    sf::CircleShape shape(250.f);
    sf::Color windowColor(240, 240, 240);

    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    sf::Vector2i windowPosition((desktop.width / 2 - (WINDOW_WIDTH/2)), ( desktop.height / 2 - (WINDOW_HEIGHT/2)));

    shape.setFillColor(sf::Color::Cyan);
    sf::Music* myMusic = new sf::Music();

    myMusic->openFromFile("mymusic.flac");
    //myMusic->play();


    window.setPosition(windowPosition);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(windowColor);
        window.display();
    }

//========== SFML Audio library music playing ===========================//

    // Use the music class
    delete myMusic;


    return(0);
}
