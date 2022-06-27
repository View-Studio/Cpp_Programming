#include <random>
#include "Shuffle.h"

using namespace std;

void shuffle()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(0, 51);

	for (int i = 0; i < 52; ++i)
	{
		int FirstNum = dis(gen);
		int SecondNum = dis(gen);

		stCard temp = cards[FirstNum];
		cards[FirstNum] = cards[SecondNum];
		cards[SecondNum] = temp;
	}
}