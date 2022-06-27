#include "Marine.h"

Marine::Marine() : hp{50}, coordX{0}, coordY{0}, damage{5}, isDead{false}, name{nullptr}
{
}

Marine::Marine(int x, int y)
{
	coordX = x;
	coordY = y;
	hp = 50;
	damage = 5;
	isDead = false;
	name = nullptr;
}

Marine::Marine(int x, int y, const char* marine_name)
{
	coordX = x;
	coordY = y;
	hp = 50;
	damage = 5;
	isDead = false;
	name = new char[strlen(marine_name) + 1];
	strcpy_s(name, strlen(marine_name) + 1, marine_name);
}

Marine::~Marine()
{
	std::cout << name << " 의 소멸자 호출 ! " << std::endl;
	if (name != nullptr)
	{
		delete[] name;
		name = nullptr;
	}
}

int Marine::attack()
{
	return damage;
}

void Marine::beAttacked(int damageEarn)
{
	hp -= damageEarn;
	if (hp <= 0) { isDead = true; }
}

void Marine::move(int x, int y)
{
	coordX = x;
	coordY = y;
}

void Marine::showStatus()
{
	std::cout << " *** Marine : " << name << " ***" << std::endl;
	std::cout << " Location : ( " << coordX << " , " << coordY << " ) " << std::endl;
	std::cout << " HP : " << hp << std::endl;
}
