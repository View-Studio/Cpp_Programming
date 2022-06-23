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

	void takeDamage(double damaged); // ������ �������� �޾��� �� ȣ��Ǵ� �Լ�
	void attackEnemy(); // ���� �������� �� ȣ��Ǵ� �Լ�

	void showStat();
};