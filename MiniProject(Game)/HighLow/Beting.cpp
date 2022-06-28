#include "Beting.h"

void Beting(int& fullMoney, bool betWin)
{
	bool isBet = false;
	char userBetSelect = ' ';

	cout << "\n배팅을 하시겠습니까? (Y / N) ";
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

		cout << "\n--------------------------" << "\n전 재산 : " << fullMoney << endl;
		cout << "배팅 금액 : ";
		cin >> betMoney;
		cout << "--------------------------";

		if (fullMoney >= betMoney)
		{
			fullMoney -= betMoney;
			if (betWin)
			{
				fullMoney += betMoney*2;
				cout << "\n땄습니다!\n전 재산 : " << fullMoney << endl;
				break;
			}
			else
			{
				cout << "\n잃었습니다!\n전 재산 : " << fullMoney << endl;
				if (fullMoney <= 0)
				{
					cout << "\n파산 하셨습니다. "<< endl;
				}
				break;
			}
		}
		else
		{
			cout << "\n돈이 부족합니다." << endl;
			continue;
		}

	}
	if (!isBet)
	{
		cout << "\n죽었습니다." << endl;
	}
}