
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

	void takeDamage(); // 적에게 데미지를 받았을 때 함수
	void attackPlayer(Player* ptPlayer); // 적에게 공격을 했을 때 함수
};
