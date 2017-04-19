#ifndef TEXTOBJ_H
#define TEXTOBJ_H

#include <cstdlib>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "ButtonObj.h"

class TextObj : public sf::Text
{

public:
    void setTextLocationCentered(ButtonObj* );

private:

};

#endif
