#include "Storage.h"

Storage::Storage(string _name) : Potato { 0 }, Onion{0}, Carrot{0}
{
	name = _name;
}

void Storage::Add(int a, int b, int c)
{
	Potato += a;
	Onion += b;
	Carrot += c;
}

void Storage::Minus(int a, int b, int c)
{
	if (Potato - a >= 0 && Onion - b >= 0 && Carrot - c >= 0)
	{
		Potato -= a;
		Onion -= b;
		Carrot -= c;
	}
	else
	{
		cout << "\n양이 부족합니다!" << endl;
	}
}

void Storage::Move(Storage& strg)
{
	Potato = strg.Potato;
	Onion = strg.Onion;
	Carrot = strg.Carrot;

	strg.Potato = 0;
	strg.Onion = 0;
	strg.Carrot = 0;
}

void Storage::AddMode()
{
	int userInput1 = 0;
	int userInput2 = 0;
	int userInput3 = 0;

	cout << "\n-입고 모드-" << endl;
	cout << "\n추가 개수를 입력하세요 (Potato / Onion / Carrot) : ";
	cin >> userInput1 >> userInput2 >> userInput3;
	this->Add(userInput1, userInput2, userInput3);
	this->showStorage();
}

void Storage::MinusMode()
{
	int userInput1 = 0;
	int userInput2 = 0;
	int userInput3 = 0;

	cout << "\n-출고 모드-" << endl;
	cout << "\n가져갈 개수를 입력하세요 (Potato / Onion / Carrot) : ";
	cin >> userInput1 >> userInput2 >> userInput3;
	this->Minus(userInput1, userInput2, userInput3);
	this->showStorage();
}

void Storage::showStorage()
{
	cout << "\n[" << name<<" 창고] ( " << "Potato : " << Potato << " Onion : " << Onion << " Carrot : " << Carrot << " )\n" << endl;
}
