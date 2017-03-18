#ifndef _FILEHANDLER_H
#define _FILEHANDLER_H

#include <string>

class FileHandler
{

public:

    // constructor/destructor
    FileHandler();
    FileHandler(std::string &fileN, std::string &fileT);
    ~FileHandler();

    // get/set
    std::string getFileName();
    bool setFileName(std::string &newFileName);
    std::string getType();
    bool setType(std::string &newTypeName);

    // function
    void toggleDebugger(bool toggle);
    void addToFile(std::string strAddition);



private:

    std::string fileName;
    std::string fileType;
    bool debugger;

};

#endif
