#include "PhotonCannon.h"

PhotonCannon::PhotonCannon(int x, int y)
{
	std::cout << "생성자 호출 !" << std::endl;
	hp = shield = 100;
	coordX = x;
	coordY = y;
	damage = 20;
}

PhotonCannon::PhotonCannon(const PhotonCannon& pc)
{
	std::cout << "복사 생성자 호출 !" << std::endl;
	hp = pc.hp;
	shield = pc.shield;
	coordX = pc.coordX;
	coordY = pc.coordY;
	damage = pc.damage;
}

void PhotonCannon::showStatus()
{
	std::cout << "Photon Cannon " << std::endl;
	std::cout << " Location : ( " << coordX << " , " << coordY << " ) " << std::endl;
	std::cout << " HP : " << hp << std::endl;
}
