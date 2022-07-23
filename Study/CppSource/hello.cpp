#include <iostream>
#include "header1.h"

namespace { // 이름 없는 네임스페이스의 경우 한 파일내에서 여러 번 사용해도 같은 공간 취급을 받는다.
	int haha = 1029384;

	void printInt(int num)
	{
		std::cout << num << std::endl;
	}
}
namespace {
	//int haha = 104012409; // 컴파일 에러
	int hahaA = haha;

	//void printIntA(int num)  // 컴파일 에러
	//{
	//	std::cout << num << std::endl;
	//}

	void printIntA(int num)
	{
		std::cout << num << std::endl;
	}
}

int haha = 34920;

int main()
{
	int haha = 100;
	std::cout << "Hello, World!!" << std::endl;
	//std::cout << math::add(12, 530) << std::endl;
	std::cout << "Hi!" << std::endl << "my name is " << "kyungMin" << std::endl;
	printInt(::haha);
	return 0;
}