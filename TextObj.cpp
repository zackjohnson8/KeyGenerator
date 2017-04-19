#include "TextObj.h"

void TextObj::setTextLocationCentered(ButtonObj* pButton)
{

    // set position based on the ButtonObj passed to the function
    std::cout << this->getCharacterSize() << std::endl;
    this->setPosition(pButton->getPosition().x + pButton->getSize().x/2 - this->getString().getSize()*(10)/2, pButton->getPosition().y + pButton->getSize().y/2 - this->getCharacterSize()/2);

}
