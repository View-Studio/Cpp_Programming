#include "PhotonCannon.h"

PhotonCannon::PhotonCannon(int x, int y) {
	std::cout << "생성자 호출 !" << std::endl;
	hp = shield = 100;
	coordX = x;
	coordY = y;
	damage = 20;

	name = nullptr;
}
PhotonCannon::PhotonCannon(int x, int y, char* name_)
{
	std::cout << "생성자 호출 !" << std::endl;
	hp = shield = 100;
	coordX = x;
	coordY = y;
	damage = 20;

	name = new char[strlen(name_) + 1];
	strcpy_s(name, strlen(name_) + 1, name_);
}
PhotonCannon::PhotonCannon(int x, int y, const char* name_)
{
	std::cout << "콘스트 생성자 호출 !" << std::endl;
	hp = shield = 100;
	coordX = x;
	coordY = y;
	damage = 20;

	name = new char[strlen(name_) + 1];
	strcpy_s(name, strlen(name_) + 1, name_);
}

PhotonCannon::PhotonCannon(const PhotonCannon& pc)
{
	std::cout << "복사 생성자 호출 !" << std::endl;
	hp = pc.hp;
	shield = pc.shield;
	coordX = pc.coordX;
	coordY = pc.coordY;
	damage = pc.damage;

	name = new char[strlen(pc.name) + 1];
	strcpy_s(name, strlen(pc.name) + 1, pc.name);
}

PhotonCannon::~PhotonCannon()
{
	if (name) delete[] name;
}

void PhotonCannon::showStatus()
{
	std::cout << "Photon Cannon " << std::endl;
	std::cout << " Location : ( " << coordX << " , " << coordY << " ) " << std::endl;
	std::cout << " HP : " << hp << std::endl;
}
