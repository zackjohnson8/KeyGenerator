#ifndef TASKOBJ_H
#define TASKOBJ_H

#include <cstdlib>
#include <iostream>
#include <SFML/Graphics.hpp>

class TaskObj : public sf::RectangleShape
{

public:



    void setTitle(std::string&);
    void setDescription(std::string&);


private:

    std::string taskTitle;
    std::string taskDescription;

};

#endif // TASKOBJ_H
