#include "cstring.h"

void cstring::strcpy(char* destinationStr, char* originalStr)
{
	//copy string2 into the string1
	int size;

	delete[] destinationStr;
	destinationStr = NULL;

	size = strlen(originalStr);

	destinationStr = new char[size];

	// copy one string to another
	for(int x = 0; x < size; x++)
	{

		*destinationStr = *originalStr;

		originalStr++;
		destinationStr++;

	}

}

bool cstring::strcmp(char* string1, char* string2)
{
	// string compare the two
	bool match = true;

	//check if the given string is the same as suit
	while(*string1 != '\0')
	{

		if(*string1 != *string2)
		{

			match = false;

		}

		string1++;
		string2++;

	}

	return match;
}

int cstring::strlen(char* string)
{
	// count the length of the string
	int size = 0;

	while(*string != '\0')
	{

		size++;

		string++;

	}

	size++;

	return size;

}

void cstring::strcat(char* string1, char* string2)
{

	// take two strings (string1, string2) and combine them with a space inbetween
	int strlen1;
	int strlen2;
	int totalLen;

	strlen1 = strlen(string1);
	strlen2 = strlen(string2);
	totalLen = strlen1 + strlen2;

	char* temp = new char[totalLen];
	char* tempHome = temp;
	char* string1Home = string1;

	for(int x = 0; x < strlen1 - 1; x++)
	{

		*temp = *string1;
		temp++;
		string1++;

	}

	*temp = ' ';
	temp++;

	for(int x = 0; x < strlen2; x++)
	{

		*temp = *string2;
		temp++;
		string2++;

	}

	temp = '\0';

	temp = tempHome;

	string1 = string1Home;

	delete[] string1;
	string1 = NULL;
	string1 = new char[totalLen];
	string1Home = string1;


	for(int x = 0; x < totalLen; x++)
	{

		*string1 = *temp;

		string1++;
		temp++;

	}

	temp = tempHome;

	delete[] temp;
	temp = NULL;
	tempHome = NULL;

}

void cstring::strclear(char* string)
{

	int size;

	size = strlen(string);

	for(int x = 0; x < (size - 1); x++)
	{

		*string = '\0';
		string++;

	}

}

// substr - finds the substring starting at element x and ending at element y
void cstring::substr(char* string, int x, int y)
{

	int length = y - x;

	for(int z = 0; z < x - 1; z++)
	{

		string++;

	}

	for(int z = 0; z <= length; z++)
	{

		cout << *string;
		string++;

	}

}

// strinsert - inserts a new string into destination string starting at position x. Does not
// overwrite the destination string, e.g., insert string = "big"; destination = "oldest"
// ; position = 3; result string = "olbigdest"
void cstring::strinsert(char* string1, char* string2, int x)
{

	int string1size = strlen(string1);
	int size = strlen(string1) + strlen(string2) - 1;
	char* holdstring1 = new char[size];
	char* holdstringHome = holdstring1;
	char* string1Home = string1;

	for(int z = 0; z < x - 1; z++)
	{

		*holdstring1 = *string1;
		holdstring1++;
		string1++;

	}

	size = strlen(string2) - 1;

	for(int z = 0; z < size; z++)
	{

		*holdstring1 = *string2;
		holdstring1++;
		string2++;

	}

	size = string1size - x;

	for(int z = 0; z < size; z++)
	{

		*holdstring1 = *string1;
		holdstring1++;
		string1++;

	}

	*holdstring1 = '\0';

	holdstring1 = holdstringHome;

	string1 = string1Home;
	delete[] string1;
	string1 = NULL;
	size = strlen(holdstring1);
	string1 = new char[size];

	size = strlen(holdstring1);

	for(int z = 0; z < size; z++)
	{

		*string1 = *holdstring1;
		holdstring1++;
		string1++;

	}

	holdstring1 = holdstringHome;
	delete[] holdstring1;
	holdstring1 = NULL;


}

// strreplace - inserts a new string into destination string starting at position x.
// Overwrites the destination big, oldest, pos 3, olbigt
void cstring::strreplace(char* string1, char* string2, int x)
{

	int size;

	if( (x + strlen(string2) - 1) > strlen(string1) )
	{
		//too big area

		cout << "Don't have the functionality for these options." << endl
			 << "Probably is too long." << endl;

	}else
	{

		//will fit just right
		int string1size = strlen(string1);
		size = strlen(string1);

		char* temp = new char[size];
		char* string1Home = string1;
		char* tempHome = temp;
		int count = 0;


		for(int z = 0; z < x; z++)
		{

			*temp = *string1;
			temp++;
			string1++;
			count++;

		}

		size = strlen(string2);

		for(int z = 0; z < size - 1; z++)
		{

			*temp = *string2;
			temp++;
			string2++;
			string1++;
			count++;

		}

		size = string1size - count - 1;

		for(int z = 0; z < size; z++)
		{

			*temp = *string1;
			temp++;
			string1++;

		}

		*temp = '\0';

		temp = tempHome;
		string1 = string1Home;

		size = strlen(temp);

		string1 = string1Home;

		delete[] string1;
		string1Home = NULL;
		string1 = NULL;

		string1 = new char[size];
		string1Home = string1;

		for(int z = 0; z < size - 1; z++)
		{

			*string1 = *temp;
			string1++;
			temp++;

		}

		temp = tempHome;
		delete[] temp;
		temp = NULL;
		string1Home = NULL;
		tempHome = NULL;
	}


}

void cstring::strfill(char* string, char letter, int x, int y)
{

	// fill a part of the string with a letter y amount of times
	int size = 0;
	size = strlen(string);

	for(int z = 0; z < x; z++)
	{

		string++;

	}

	for(int z = 0; z < y; z++)
	{

		*string = letter;
		string++;

	}

}

void cstring::strreverse(char* string)
{

	// reverses the string given.

	int size;
	size = strlen(string);
	char* temp = new char[size];
	char* stringHome = string;
	char* tempHome = temp;

	for(int x = 0; x < size; x++)
	{

		string++;

	}

	string--;

	while(string != stringHome)
	{

		string--;
		*temp = *string;
		temp++;

	}

	string = stringHome;
	temp = tempHome;

	delete[] string;
	string = NULL;

	string = new char[size];

	for(int x = 0; x < size; x++)
	{

		*string = *temp;
		string++;
		temp++;

	}

	*string = '\0';

	temp = tempHome;
	delete[] temp;
	temp = NULL;

}















