#include "string.h"

string::string(char c, int n)
{
	len = n;
	str = new char[len + 1];
	for (int i = 0; i < len+1; ++i)
	{
		if (i == len)
		{
			str[i] = '\0';
		}
		else
		{
			str[i] = c;
		}
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

	for (int i = 0; i < len+1; ++i)
	{
		if (i == len)
		{
			str[i] = '\0';
		}
		else
		{
			str[i] = s[i];
		}
	}
}

string::string(const string& s)
{
	len = s.len;
	str = new char[len + 1];
	for (int i = 0; i < len+1; ++i)
	{
		if (i == len)
		{
			str[i] = '\0';
		}
		else
		{
			str[i] = s.str[i];
		}
	}
}

string::~string()
{
	std::cout << "{Destructor Call}" << std::endl;
	delete[] str;
}

void string::add_string(const string& s)
{
	int count = 0;
	char* temp = new char[len + s.len + 1];

	for (int i = 0; i < (len + s.len + 1); ++i)
	{
		if (i < len)
		{
			temp[i] = str[i];
			++count;
		}
		else
		{
			if (i == len + s.len)
			{
				temp[i] = '\0';
			}
			else
			{
				temp[i] = s.str[i - count];
			}
		}
	}

	delete[] str;

	str = temp;
	len = this->strlen();
}

void string::copy_string(const string& s)
{
	delete[] str;
	str = new char[s.len + 1];
	len = s.len;

	for (int i = 0; i < s.len + 1; ++i)
	{
		if (i == s.len)
		{
			str[i] = '\0';

		}
		else
		{
			str[i] = s.str[i];
		}
	}
}

int string::strlen()
{
	int count = 0;

	while (true)
	{
		if (str[count] == '\0')
		{
			break;
		}
		else
		{
			++count;
		}
	}

	return count;
}

void string::printString()
{
	for (int i = 0; i < len; ++i)
	{
		std::cout << str[i];
	}
	std::cout << std::endl;
}
