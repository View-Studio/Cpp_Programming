#include "Enemy.h"

Enemy::Enemy() : NAME{"ENEMY"}, LEVEL{ 1 }, STR{ 6 }, INT{ 5 }, DEX{ 5 }, LUK{ 5 }, HP{ 120, 120 }, MP{ 100, 100 }, DAMAGE{ STR * 1.5 }, DEPENSE{ DEX * 1.5 }, player{ NULL }  // 초기화
{
}

void Enemy::takeDamage(double damaged)
{
	Math math;

	if (HP[0] <= 0)
	{
		std::cout << "GameOver!" << std::endl;
	}
	else if (DEPENSE < damaged)
	{
		HP[0] -= math.abs(DEPENSE - damaged);
	}
}

void Enemy::attackPlayer(Player* playerPtr)
{
	player = playerPtr;
	player->takeDamage(DAMAGE);
	std::cout << NAME << " 가 " << player->returnName() << " 를 공격했습니다!\n" << std::endl;
}

void Enemy::showStat()
{
	std::cout << "------------------------" << std::endl;
	std::cout << "NAME : " << NAME << "\n" << std::endl;
	std::cout << "LEVEL : " << LEVEL << "\n" << std::endl;
	std::cout << "STR : " << STR << std::endl;
	std::cout << "INT : " << INT << std::endl;
	std::cout << "DEX : " << DEX << std::endl;
	std::cout << "LUK : " << LUK << "\n" << std::endl;
	std::cout << "HP : " << HP[0] << "/" << HP[1] << std::endl;
	std::cout << "MP : " << MP[0] << "/" << MP[1] << "\n" << std::endl;
	std::cout << "------------------------" << std::endl;
}

std::string Enemy::returnName()
{
	return NAME;
}


