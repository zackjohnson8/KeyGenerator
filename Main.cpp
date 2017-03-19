/*
Author: Zachary L. Johnson
Description: Create random generated keys and put them in a file for reading.
Version: 1.0
Date: 03/15/17
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include "FileHandler.h"

int main()
{

    std::string myAddition = "The first string added to the file";
    std::string fileName = "givenname";
    std::string fileType = ".txt";


    FileHandler* debuggerFile = new FileHandler();

    debuggerFile->deleteFile();

    debuggerFile->addToFile(myAddition);
    debuggerFile->addToFile("add this too");


    return(0);
}
