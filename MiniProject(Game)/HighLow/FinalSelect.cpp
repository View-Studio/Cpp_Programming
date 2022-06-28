#include <iostream>
#include "FinalSelect.h"
#include "ShowCard.h"
#include "Beting.h"

using namespace std;

void finalSelect(int& money)
{
	string userSelect = "";

	while (true)
	{
		cout << "High / Low (Select) ";
		cin >> userSelect;

		if (userSelect == "High" || userSelect == "high")
		{
			if (cards[0].number < cards[1].number)
			{
				Beting(money, true);
				cout << "\n다음 카드 : ";
				showCard(1);
				cout << "user win\n";
				cout << "-----------------------------\n" << endl;
				break;
			}
			else if (cards[0].number == cards[1].number)
			{
				if (cards[0].mark > cards[1].mark)
				{
					Beting(money, true);
					cout << "\n다음 카드 : ";
					showCard(1);
					cout << "user win\n";
					cout << "-----------------------------\n" << endl;
					break;
				}
				else
				{
					Beting(money, false);
					cout << "\n다음 카드 : ";
					showCard(1);
					cout << "user lose\n";
					cout << "-----------------------------\n" << endl;
					break;
				}
			}
			else
			{
				Beting(money, false);
				cout << "\n다음 카드 : ";
				showCard(1);
				cout << "user lose\n";
				cout << "-----------------------------\n" << endl;
				break;
			}
		}

		else if (userSelect == "Low" || userSelect == "low")
		{
			if (cards[0].number > cards[1].number)
			{
				Beting(money, true);
				cout << "\n다음 카드 : ";
				showCard(1);
				cout << "user win\n";
				cout << "-----------------------------\n" << endl;
				break;
			}
			else if (cards[0].number == cards[1].number)
			{
				if (cards[0].mark < cards[1].mark)
				{
					Beting(money, true);
					cout << "\n다음 카드 : ";
					showCard(1);
					cout << "user win\n";
					cout << "-----------------------------\n" << endl;
					break;
				}
				else
				{
					Beting(money, false);
					cout << "\n다음 카드 : ";
					showCard(1);
					cout << "user lose\n";
					cout << "-----------------------------\n" << endl;
					break;
				}
			}
			else
			{
				Beting(money, false);
				cout << "\n다음 카드 : ";
				showCard(1);
				cout << "user lose\n";
				cout << "-----------------------------\n" << endl;
				break;
			}
		}
	}
}