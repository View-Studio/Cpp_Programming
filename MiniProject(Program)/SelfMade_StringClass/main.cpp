#include <iostream>
#include "string.h"

int main()
{
	string st1('K', 5);
	string st2("Hello, World! My Name is KyungMin Kim");
	string st3(st1);

	std::cout << "[ PRINT STRING ]" << std::endl;
	st1.printString();
	st2.printString();
	st3.printString();

	std::cout << "\n[ STRLEN ]" << std::endl;
    std::cout << st1.strlen() << std::endl;
    std::cout << st2.strlen() << std::endl;
    std::cout << st3.strlen() << std::endl;

	std::cout << "\n[ ADD STRING ]" << std::endl;
	st1.add_string(st2);
	st1.printString();
    std::cout << st1.strlen() << std::endl;

	std::cout << "\n[ COPY STRING ]" << std::endl;
	st1.copy_string(st2);
	st1.printString();
    std::cout << st1.strlen() << std::endl << std::endl;

	return 0;
}