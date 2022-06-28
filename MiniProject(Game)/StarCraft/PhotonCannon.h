#pragma once
#include <string>
#include <iostream>

class PhotonCannon
{
	int hp, shield;
	int coordX, coordY;
	int damage;
	char* name;

public:
	PhotonCannon(int x, int y);
	PhotonCannon(int x, int y, char* name_);
	PhotonCannon(int x, int y, const char* name_);
	PhotonCannon(const PhotonCannon& pc);
    ~PhotonCannon();

	void showStatus();
};

