#include "TextObj.h"

void TextObj::setTextLocation(ButtonObj* pButton)
{

    // set position based on the ButtonObj passed to the function
    this->setPosition(pButton->getPosition().x, pButton->getPosition().y);

}
