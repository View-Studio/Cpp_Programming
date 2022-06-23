#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Player.h"
#include "Math.h"

class Player;

class Enemy
{
	std::string NAME;

	int LEVEL;

	int STR;
	int INT;
	int DEX;
	int LUK;

	std::vector<double> HP;
	std::vector<double> MP;

	double DAMAGE;
	double DEPENSE;

	Player* player;

public:
	Enemy();

	void takeDamage(double damaged); // �÷��̾�� �������� �޾��� �� �Լ�
	void attackPlayer(Player* playerPtr); // �÷��̾�� ������ ���� �� �Լ�

	void showStat();
	std::string returnName();
};
