#include <iostream>
#include "FinalSelect.h"
#include "ShowCard.h"

using namespace std;

void finalSelect()
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
				showCard(1);
				cout << "user win\n";
				break;
			}
			else if (cards[0].number == cards[1].number)
			{
				if (cards[0].mark > cards[1].mark)
				{
					showCard(1);
					cout << "user lose\n";
					break;
				}
				else
				{
					showCard(1);
					cout << "user win\n";
					break;
				}
			}
			else
			{
				showCard(1);
				cout << "user lose\n";
				break;
			}
		}

		else if (userSelect == "Low" || userSelect == "low")
		{
			if (cards[0].number > cards[1].number)
			{
				showCard(1);
				cout << "user win\n";
				break;
			}
			else if (cards[0].number == cards[1].number)
			{
				if (cards[0].mark < cards[1].mark)
				{
					showCard(1);
					cout << "user lose\n";
					break;
				}
				else
				{
					showCard(1);
					cout << "user win\n";
					break;
				}
			}
			else
			{
				showCard(1);
				cout << "user lose\n";
				break;
			}
		}
	}
}