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
		return !(*this == other); // this�� other�� ������ false�� ������, �ٸ��� true�� ���´�.
	}

	Pos operator+(Pos& other) // A + B ��ȯ
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