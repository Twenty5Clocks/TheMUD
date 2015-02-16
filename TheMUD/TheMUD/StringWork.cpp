#include "stringworkHeader.h"

std::string StringWork::toUpper(std::string str)
{
	for (int i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]);

	}
	return str;
}

std::string StringWork::toLower(std::string str)
{
	for (int i = 0; i < str.size(); i++)
	{
		str[i] = tolower(str[i]);

	}
	return str;
}