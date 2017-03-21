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
    stream << strAddition << std::endl;

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

    // Open file search while good() and compare each line with getline then str.compare()
    std::ifstream stream;
    std::ofstream tempFile;
    std::string tempFileName = "tempFile.txt";
    std::string holdLine;
    std::string holdString;
    bool flag = false;

    stream.open(appendedName.c_str());
    tempFile.open(tempFileName.c_str());

    while(stream.good())
    {

        std::getline(stream, holdLine);

        if(holdLine.compare(searchedValue) == 0)
        {

            // found the correct string
            flag = true;


        }
        else
        {

            // write to the temp file
            tempFile << holdLine << std::endl;


        }



    }

    stream.clear();
    tempFile.close();
    stream.close();

    std::ofstream streamReadBack;
    std::ifstream tempFileReadBack;

    streamReadBack.open(appendedName.c_str());
    tempFileReadBack.open(tempFileName.c_str());

    while(tempFileReadBack.good())
    {

        std::getline(tempFileReadBack, holdLine);

        streamReadBack << holdLine << std::endl;


    }

    tempFileReadBack.close();
    std::remove(tempFileName.c_str());
    streamReadBack.close();

    return flag;

}

#endif

