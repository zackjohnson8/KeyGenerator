#ifndef DISPLAYWINDOW_H
#define DISPLAYWINDOW_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class DisplayWindow{

public:
    DisplayWindow(int width, int height);
    ~DisplayWindow();

    void showWindow(bool status);
    void close();
    bool isOpen();
    bool pollEvent(sf::Event& e);

    sf::RenderWindow getHandle();

private:
    int windowWidth;
    int windowHeight;

    sf::RenderWindow mainWindow;
    sf::Color windowColor;

};

#endif
