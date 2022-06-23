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

	void takeDamage(double damaged); // 플레이어에게 데미지를 받았을 때 함수
	void attackPlayer(Player* playerPtr); // 플레이어에게 공격을 했을 때 함수

	void showStat();
	std::string returnName();
};
