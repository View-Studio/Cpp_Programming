#include "string.h"

string::string(char c, int n)
{
	len = n;
	str = new char[len + 1];
	for (int i = 0; i < len + 1; ++i)
	{
		str[i] = c;
	}
}

string::string(const char* s)
{
	len = 0;

	while (true)
	{
		if (s[len] == '\0')
		{
			break;
		}
		else
		{
			++len;
		}
	}

	str = new char[len + 1];

	for (int i = 0; i < len; ++i)
	{
		str[i] = s[i];
	}
}

string::string(const string& s)
{
	
}

string::~string()
{
	delete[] str;
}

void string::add_string(const string& s)
{
}

void string::copy_string(const string& s)
{
}

int string::strlen() const
{
	return len;
}

void string::printString()
{
	for (int i = 0; i < len; ++i)
	{
		std::cout << str[i];
	}
	std::cout << std::endl;
}
