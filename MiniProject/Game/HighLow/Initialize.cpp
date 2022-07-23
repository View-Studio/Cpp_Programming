#include "Initialize.h"


void initialize()
{
	int n = 0;

	for (int i = 0; i < 52; ++i)
	{
		if (i >= 13 && i < 26)
		{
			cards[i].mark = Dia;
			cards[i].number = i - n + 1;
			if (i == 25)
			{
				n = 26;
			}
		}
		else if (i >= 26 && i < 39)
		{
			cards[i].mark = Heart;
			cards[i].number = i - n + 1;
			if (i == 38)
			{
				n = 39;
			}
		}
		else if (i >= 39 && i < 52)
		{
			cards[i].mark = Clover;
			cards[i].number = i - n + 1;
		}
		else
		{
			cards[i].mark = Spade;
			cards[i].number = i + 1;
			if (i == 12)
			{
				n = 13;
			}
		}
	}
}