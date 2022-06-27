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
	cout << "-----------------------------\n" << "ī�� ����" << endl;
	cout << "Clover > "  << "Heart > " << "Dia > " << "Spade\n" << "-----------------------------" << endl;

	// ī�� ���� �ϱ� (���� �ֱ�)
	initialize();

	// ī�� ���� �ϱ�
	shuffle();
	
	// ���� ī�� ���
	showCard(0);

	// ���� ���� �� ����
	finalSelect();

	return 0;
}