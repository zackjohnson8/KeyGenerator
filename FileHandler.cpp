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
    appendedName = fileName;
    appendedName.append(fileType);
    debugger = false;

}

FileHandler::FileHandler(std::string &fileN, std::string &fileT)
{

    fileName = fileN;
    fileType = fileT;
    appendedName = fileName;
    appendedName.append(fileType);
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

void FileHandler::setFileName(std::string &newFileName)
{

    fileName = newFileName;

    appendedName = fileName;
    appendedName.append(fileType);

}

std::string FileHandler::getType()
{
    return fileType;
}

void FileHandler::setType(std::string &newTypeName)
{

    fileType = newTypeName;

    appendedName = fileName;
    appendedName.append(fileType);

}

// function --------------------------------------------------------------
void FileHandler::toggleDebugger(bool toggle)
{

    // defaulted debugger to false
    debugger = toggle;

}

void FileHandler::addTextToFile(std::string &strAddition)
{

    std::ofstream stream;

    //file exists already, append content to file
    stream.open(appendedName.c_str(), std::ios_base::app);
    stream << strAddition << "\r\n";

    stream.close();


}

void FileHandler::deleteFile()
{

    std::remove(appendedName.c_str());

}

std::string FileHandler::peakTop()
{


    std::ifstream stream;
    std::string holdLine;

    stream.open(appendedName.c_str());

    if(stream.good())
    {

        std::getline(stream, holdLine);
        return holdLine;

    }

    stream.close();

    // getline(), check if file is empty first
    return std::string();

}

bool FileHandler::deleteBySearch(std::string &searchedValue)
{

    return false;

}

#endif

