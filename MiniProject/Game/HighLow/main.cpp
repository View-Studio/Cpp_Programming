#include <iostream>
#include <string>
#include "Card.h"
#include "Common.h"
#include "Initialize.h"
#include "Shuffle.h"
#include "FinalSelect.h"
#include "ShowCard.h"

using namespace std;

int main()
{
	bool isPlaying = true;
	char userSelect = ' ';
	int money = 10000;

	cout << "-----------------------------\n" << "ī�� ����" << endl;
	cout << "Clover > "  << "Heart > " << "Dia > " << "Spade\n" << "-----------------------------" << endl;

	while (money > 0 && isPlaying)
	{
		cout << "\n������ �÷��� �Ͻðڽ��ϱ�? (Y / N) ";
		cin >> userSelect;

		if (userSelect == 'Y' || userSelect == 'y')
		{
			isPlaying = true;
		}
		else if (userSelect == 'N' || userSelect == 'n')
		{
			isPlaying = false;
		}

		if (isPlaying)
		{
			// ī�� ���� �ϱ� (���� �ֱ�)
			initialize();

			// ī�� ���� �ϱ�
			shuffle();

			// ���� ī�� ���
			cout << "\n�� ī�� : ";
			showCard(0);

			// ���� ���� �� ����
			finalSelect(money);
		}
	}

	return 0;
}