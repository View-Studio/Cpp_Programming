#include <iostream>

typedef struct Animal
{
	char name[30];
	int age;
	int health;
	int food;
	int clean;
} Animal;

void createAnimal(Animal* animal);
void play(Animal* animal);
void oneDayPass(Animal* animal);
void showStat(Animal* animal);




int main()
{
	Animal* list[10];
	int animalNum = 0;

	for (;;)
	{
		std::cout << "1. ���� �߰��ϱ� " << std::endl;
		std::cout << "2. ��� " << std::endl;
		std::cout << "3. ���� ���� " << std::endl;

		int input;
		std::cin >> input;

		switch (input) {
			int playWith;
		case 1:
			list[animalNum] = new Animal;
			createAnimal(list[animalNum]);
			++animalNum;

			break;
		case 2:
			std::cout << "������ ���? : ";
			std::cin >> playWith;

			if (playWith < animalNum) play(list[playWith]);

			break;
		case 3:
			std::cout << "������ ����? : ";
			std::cin >> playWith;
			if (playWith < animalNum) showStat(list[playWith]);

			break;
		}

		for (int i = 0; i != animalNum; ++i)
		{
			oneDayPass(list[i]);
		}
	}

	for (int i = 0; i != animalNum; ++i)
	{
		delete list[i];
	}

	return 0;
}




void createAnimal(Animal* animal)
{
	std::cout << "������ �̸�? ";
	std::cin >> animal->name;

	std::cout << "������ ����? ";
	std::cin >> animal->age;

	animal->health = 100;
	animal->food = 100;
	animal->clean = 100;
}

void play(Animal* animal)
{
	animal->health += 10;
	animal->food -= 10;
	animal->clean -= 30;
}

void oneDayPass(Animal* animal)
{
	animal->health -= 10;
	animal->food -= 30;
	animal->clean -= 20;
}

void showStat(Animal* animal)
{
	std::cout << animal->name << "�� ����" << std::endl;
	std::cout << "ü��		:" << animal->health << std::endl;
	std::cout << "��θ�	:" << animal->food << std::endl;
	std::cout << "����		:" << animal->clean << std::endl;
}