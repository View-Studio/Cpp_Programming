#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Enemy.h"
#include "Math.h"

class Enemy;

class Player
{
	std::string NAME;

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

	Enemy* enemy;

public:
	Player();

	void levelUp();
	void strUp();
	void intUp();
	void dexUp();
	void lukUp();

	void takeDamage(double damaged); // 적에게 데미지를 받았을 때 호출되는 함수
	void attackEnemy(Enemy* enemyPtr); // 적을 공격했을 때 호출되는 함수

	void showStat();
	std::string returnName();
};