#include <iostream>
#include <cstdlib>

using namespace std;

class c_string
{

public:

    static void strcpy(char* destinationStr, char* originalStr);
    static bool strcmp(char* string1, char* string2);
    static int strlen(char* string);
    static void strcat(char* string1, char* string2);
    static void strclear(char* string);
    static void substr(char* string, int x, int y);
    static void strinsert(char* string1, char* string2, int x);
    static void strreplace(char* string1, char* string2, int x);
    static void strfill(char* string, char letter, int x, int y);
    static void strreverse(char* string);

private:



};



