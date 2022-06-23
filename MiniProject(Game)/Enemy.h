
#pragma once
#include <vector>
#include "Player.h"
#include "Math.h"


class Enemy
{
	int STR;
	int INT;
	int DEX;
	int LUK;

	std::vector<double> HP;
	std::vector<double> MP;

	double DAMAGE;
	double DEPENSE;

public:
	Enemy();

	void takeDamage(); // ������ �������� �޾��� �� �Լ�
	void attackPlayer(Player* ptPlayer); // ������ ������ ���� �� �Լ�
};
