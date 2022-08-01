#pragma once

#include "Types.h"
#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

struct Pos
{
	bool operator==(Pos& other)
	{
		return y == other.y && x == other.x;
	}

	bool operator!=(Pos& other)
	{
		return !(*this == other); // this와 other가 같으면 false가 나오고, 다르면 true가 나온다.
	}

	Pos operator+(Pos& other) // A + B 반환
	{
		Pos ret;

		ret.y = y + other.y;
		ret.x = x + other.x;

		return ret;
	}

	Pos& operator+=(Pos& other) // A += B -> A = A + B
	{
		y += other.y;
		x += other.x;

		return *this;
	}

	int32 y = 0;
	int32 x = 0;
};

enum Dir
{
	DIR_UP = 0,
	DIR_LEFT = 1,
	DIR_DOWN = 2,
	DIR_RIGHT = 3,

	DIR_COUNT = 4,
};