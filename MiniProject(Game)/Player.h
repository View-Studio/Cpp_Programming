#pragma once
#include <vector>
#include "Enemy.h"
#include "Math.h"


class Player
{
	int LEVEL;
	int statPoint;

	int STR;
	int INT;
	int DEX;
	int LUK;

	std::vector<double> HP;
	std::vector<double> MP;

	double DAMAGE;
	double DEPENSE;

public:
	Player();

	void levelUp();
	void strUp();
	void intUp();
	void dexUp();
	void lukUp();

	void takeDamage(double damaged); // 적에게 데미지를 받았을 때 호출되는 함수
	void attackEnemy(); // 적을 공격했을 때 호출되는 함수

	void showStat();
};