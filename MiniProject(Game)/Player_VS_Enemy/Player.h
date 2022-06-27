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

	void takeDamage(double damaged); // ������ �������� �޾��� �� ȣ��Ǵ� �Լ�
	void attackEnemy(Enemy* enemyPtr); // ���� �������� �� ȣ��Ǵ� �Լ�

	void showStat();
	std::string returnName();
};