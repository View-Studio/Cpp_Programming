#include "Beting.h"

void Beting(int& fullMoney, bool betWin)
{
	bool isBet = false;
	char userBetSelect = ' ';

	cout << "\n������ �Ͻðڽ��ϱ�? (Y / N) ";
	cin >> userBetSelect;

	if (userBetSelect == 'Y' || userBetSelect == 'y')
	{
		isBet = true;
	}
	else if (userBetSelect == 'N' || userBetSelect == 'n')
	{
		isBet = false;
	}

	while (isBet)
	{
		int betMoney = 0;

		cout << "\n--------------------------" << "\n�� ��� : " << fullMoney << endl;
		cout << "���� �ݾ� : ";
		cin >> betMoney;
		cout << "--------------------------";

		if (fullMoney >= betMoney)
		{
			fullMoney -= betMoney;
			if (betWin)
			{
				fullMoney += betMoney*2;
				cout << "\n�����ϴ�!\n�� ��� : " << fullMoney << endl;
				break;
			}
			else
			{
				cout << "\n�Ҿ����ϴ�!\n�� ��� : " << fullMoney << endl;
				if (fullMoney <= 0)
				{
					cout << "\n�Ļ� �ϼ̽��ϴ�. "<< endl;
				}
				break;
			}
		}
		else
		{
			cout << "\n���� �����մϴ�." << endl;
			continue;
		}

	}
	if (!isBet)
	{
		cout << "\n�׾����ϴ�." << endl;
	}
}