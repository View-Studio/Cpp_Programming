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
	cout << "-----------------------------\n" << "카드 족보" << endl;
	cout << "Clover > "  << "Heart > " << "Dia > " << "Spade\n" << "-----------------------------" << endl;

	// 카드 세팅 하기 (정보 넣기)
	initialize();

	// 카드 셔플 하기
	shuffle();
	
	// 유저 카드 출력
	showCard(0);

	// 최종 선택 후 대조
	finalSelect();

	return 0;
}