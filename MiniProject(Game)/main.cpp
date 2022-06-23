#include <iostream>
#include "Player.h"
#include "Enemy.h"


int main()
{
	Player FirstLord;
	Enemy FirstBoss;
	std::string choice = "";

	std::cout << "ÀûÀ» ¸¸³µ´Ù!" << "\n" << std::endl;

	while (true)
	{
		FirstLord.showStat();
		FirstBoss.showStat();

		std::cout << "¾î¶»°Ô ÇÒ±î? (½Î¿î´Ù / µµ¸Á°£´Ù)" << std::endl;
		std::cin >> choice;

		if (choice == "½Î¿î´Ù")
		{
			FirstLord.attackEnemy(&FirstBoss);
			FirstBoss.attackPlayer(&FirstLord);
		}
		else if (choice == "µµ¸Á°£´Ù")
		{
			std::cout << "\nÀ¸¾Ç µµ¸ÁÃÄ!\n" << std::endl;
			break;
		}
	}
}