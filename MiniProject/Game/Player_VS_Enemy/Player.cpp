#include "Player.h"


Player::Player() : NAME{"PLAYER"}, LEVEL{ 1 }, statPoint{ 0 }, STR{ 8 }, INT{ 5 }, DEX{ 5 }, LUK{ 5 }, HP{ 100, 100 }, MP{ 100, 100 }, DAMAGE{ STR * 1.5 }, DEPENSE{ DEX * 1.5 }, enemy{ NULL } // 초기화
{

}

void Player::levelUp()
{
	std::cout << "* LEVEL UP! *" << std::endl;
	// 업그레이드
	++LEVEL;
	statPoint += 5;
	HP[1] += 50;
	MP[1] += 50;
	// 회복
	HP[0] = HP[1];
	MP[0] = MP[1];
}

void Player::strUp()
{
	++STR;
	--statPoint;
}

void Player::intUp()
{
	++INT;
	--statPoint;
}

void Player::dexUp()
{
	++DEX;
	--statPoint;
}

void Player::lukUp()
{
	++LUK;
	--statPoint;
}

void Player::takeDamage(double damaged)
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

void Player::attackEnemy(Enemy* enemyPtr)
{
	enemy = enemyPtr;
	enemy->takeDamage(DAMAGE);
	std::cout << "\n" << NAME << " 가 " << enemy->returnName() << " 를 공격했습니다!" << std::endl;
}


void Player::showStat()
{
	std::cout << "------------------------" << std::endl;
	std::cout << "NAME : " << NAME << "\n" << std::endl;
	std::cout << "LEVEL : " << LEVEL << "\n" << std::endl;
	std::cout << "SP : " << statPoint << "\n" << std::endl;
	std::cout << "STR : " << STR << std::endl;
	std::cout << "INT : " << INT << std::endl;
	std::cout << "DEX : " << DEX << std::endl;
	std::cout << "LUK : " << LUK << "\n" << std::endl;
	std::cout << "HP : " << HP[0] << "/" << HP[1] << std::endl;
	std::cout << "MP : " << MP[0] << "/" << MP[1] << "\n" << std::endl;
	std::cout << "------------------------" << std::endl;
}

std::string Player::returnName()
{
	return NAME;
}
