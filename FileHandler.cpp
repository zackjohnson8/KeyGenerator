#ifndef FILEHANDLER_CPP
#define FILEHANDLER_CPP

#include "FileHandler.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>

// constructor/destructor -------------------------------------------------
FileHandler::FileHandler()
{

    fileName = "default";
    fileType = ".txt";
    debugger = false;

}

FileHandler::FileHandler(std::string &fileN, std::string &fileT)
{

    fileName = fileN;
    fileType = fileT;
    debugger = false;

}

FileHandler::~FileHandler()
{

}


// get/set ----------------------------------------------------------------
std::string FileHandler::getFileName()
{
    return fileName;
}

bool FileHandler::setFileName(std::string &newFileName)
{

    if(newFileName == "")
    {

        return false;

    }

    fileName = newFileName;

    return false;
}

std::string FileHandler::getType()
{
    return fileType;
}

bool FileHandler::setType(std::string &newTypeName)
{

    //TODO: Need to set up a list of type names that are compatible
    if(newTypeName == "")
    {
        return false;
    }

    fileType = newTypeName;

    return false;
}

// function --------------------------------------------------------------
void FileHandler::toggleDebugger(bool toggle)
{

    // defaulted debugger to false
    debugger = toggle;

}

void FileHandler::addToFile(std::string strAddition)
{

    std::string str;
    str.append(fileName);
    str.append(fileType);
    std::ofstream stream;

    //file exists already, append content to file
    stream.open(str.c_str(), std::ios_base::app);
    stream << strAddition << "\r\n";

    stream.close();


}

void FileHandler::deleteFile()
{

    std::string str;
    str.append(fileName);
    str.append(fileType);

    std::remove(str.c_str());

}

#endif

