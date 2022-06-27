#pragma once
#include <string>
#include <iostream>

class PhotonCannon
{
	int hp, shield;
	int coordX, coordY;
	int damage;

public:
	PhotonCannon(int x, int y);
	PhotonCannon(const PhotonCannon& pc);

	void showStatus();
};

