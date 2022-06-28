#include <string>
#include "ShowCard.h"

void showCard(int num)
{
	string strMark = " ";
	string JQK = " ";

	switch (cards[num].mark)
	{
	case 0:
		strMark = "Clover";
		break;
	case 1:
		strMark = "Heart";
		break;
	case 2:
		strMark = "Dia";
		break;
	case 3:
		strMark = "Spade";
		break;
	default:
		break;
	}

	switch (cards[num].number)
	{
	case 11:
		JQK = "JACK";
		cout << "{" << strMark << " | " << JQK << "}\n" << endl;
		break;
	case 12:
		JQK = "QUEEN";
		cout << "{" << strMark << " | " << JQK << "}\n" << endl;
		break;
	case 13:
		JQK = "KING";
		cout << "{" << strMark << " | " << JQK << "}\n" << endl;
		break;
	default:
		cout << "{" << strMark << " | " << cards[num].number << "}\n" << endl;
		break;
	}
}
