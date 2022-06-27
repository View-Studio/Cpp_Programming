#pragma once

#define Max 52

enum CardMark
{
	Clover = 0,
	Heart,
	Dia,
	Spade
};

struct stCard
{
	CardMark mark;
	int number;
};

