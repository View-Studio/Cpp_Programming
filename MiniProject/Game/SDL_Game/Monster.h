#pragma once
#include "Actor.h"
#include "Texture.h"

class Monster : public Actor
{
public:
	Monster()
	{
		Shape = 'M';
		SortOrder = 4;
		bCollisionEnabled = false;
		MyColor = { 255, 0, 0, 255 };


		Location.X = 6;
		Location.Y = 6;
		MyTexture = nullptr;
	}


	Monster(int NewX, int NewY)
	{
		Shape = 'M';
		SortOrder = 4;
		bCollisionEnabled = false;
		MyColor = { 255, 0, 0, 255 };

		Location.X = NewX;
		Location.Y = NewY;

		MyTexture = new Texture("./Data/slime.bmp", 255, 255, 255);
	}
	virtual ~Monster() {}
};

