#include <iostream>
#include "Storage.h"
#include "Tick.h"

using namespace std;

int main()
{
	Storage s1("S1");
	Storage s2("S2");
	
	Tick(s1, s2);

	return 0;
}