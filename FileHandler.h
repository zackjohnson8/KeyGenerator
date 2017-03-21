#ifndef FILEHANDLER_H
#define FILEHANDLER_H

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
    std::string getType();
    void setFileName(std::string &newFileName);
    void setType(std::string &newTypeName);

    // function
    void toggleDebugger(bool toggle);
    void addTextToFile(std::string &strAddition);
    void deleteFile();
    bool deleteBySearch(std::string & searchedValue);
    std::string peakTop();




private:

    std::string fileName;
    std::string fileType;
    std::string appendedName;
    bool debugger;

};


#endif
