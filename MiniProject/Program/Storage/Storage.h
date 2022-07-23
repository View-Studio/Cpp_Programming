#pragma once
#include <iostream>

using namespace std;

class Storage
{
	string name;

	int Potato;
	int Onion;
	int Carrot;

public:
	Storage(string _name);

	void Add(int a, int b, int c);
	void Minus(int a, int b, int c);
	void Move(Storage& strg);

	void AddMode();
	void MinusMode();

	void showStorage();
};

