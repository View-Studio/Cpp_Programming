#include <iostream>
#include "header1.h"

namespace { // �̸� ���� ���ӽ����̽��� ��� �� ���ϳ����� ���� �� ����ص� ���� ���� ����� �޴´�.
	int haha = 1029384;

	void printInt(int num)
	{
		std::cout << num << std::endl;
	}
}
namespace {
	//int haha = 104012409; // ������ ����
	int hahaA = haha;

	//void printIntA(int num)  // ������ ����
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