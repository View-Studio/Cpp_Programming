#include <iostream>
#include "Player.h"
#include "Enemy.h"


int main()
{
	Player FirstLord;
	Enemy FirstBoss;

	int i = 0;
	while (i < 10)
	{
		FirstLord.showStat();
		FirstBoss.attackPlayer(&FirstLord);
		//FirstLord.levelUp();
		//FirstLord.strUp();
		++i;
	}
}