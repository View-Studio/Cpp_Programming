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

	cout << "-----------------------------\n" << "카드 족보" << endl;
	cout << "Clover > "  << "Heart > " << "Dia > " << "Spade\n" << "-----------------------------" << endl;

	while (money > 0 && isPlaying)
	{
		cout << "\n게임을 플레이 하시겠습니까? (Y / N) ";
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
			// 카드 세팅 하기 (정보 넣기)
			initialize();

			// 카드 셔플 하기
			shuffle();

			// 유저 카드 출력
			cout << "\n내 카드 : ";
			showCard(0);

			// 최종 선택 후 대조
			finalSelect(money);
		}
	}

	return 0;
}