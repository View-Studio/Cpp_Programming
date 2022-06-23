#include "Enemy.h"

Enemy::Enemy() : STR{ 10 }, INT{ 5 }, DEX{ 5 }, LUK{ 5 }, HP{ 100, 100 }, MP{ 100, 100 }, DAMAGE{ STR * 1.5 }, DEPENSE{ DEX * 1.5 }  // ÃÊ±âÈ­
{
}

void Enemy::takeDamage()
{

}

void Enemy::attackPlayer(Player* ptPlayer)
{
	ptPlayer->takeDamage(DAMAGE);
}
