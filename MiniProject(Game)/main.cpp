#include <iostream>
#include "Player.h"
#include "Enemy.h"


int main()
{
	Player FirstLord;
	Enemy FirstBoss;
	std::string choice = "";

	std::cout << "���� ������!" << "\n" << std::endl;

	while (true)
	{
		FirstLord.showStat();
		FirstBoss.showStat();

		std::cout << "��� �ұ�? (�ο�� / ��������)" << std::endl;
		std::cin >> choice;

		if (choice == "�ο��")
		{
			FirstLord.attackEnemy(&FirstBoss);
			FirstBoss.attackPlayer(&FirstLord);
		}
		else if (choice == "��������")
		{
			std::cout << "\n���� ������!\n" << std::endl;
			break;
		}
	}
}