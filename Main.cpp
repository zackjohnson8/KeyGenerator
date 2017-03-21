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
    std::string myAdditionTwo = "add this too";
    std::string fileName = "debuggerfile";
    std::string fileType = ".txt";
    std::string testString;


    // Create a FileHandler to test the file handler text addition and removal
    FileHandler* debuggerFile = new FileHandler();

    debuggerFile->setFileName(fileName);

    debuggerFile->deleteFile(); // Deletes the current fileName

    debuggerFile->addTextToFile(myAddition);
    debuggerFile->addTextToFile(myAdditionTwo);

    debuggerFile->deleteBySearch(myAdditionTwo);
    testString = debuggerFile->peakTop();

    debuggerFile->addTextToFile(testString);

    return(0);
}
