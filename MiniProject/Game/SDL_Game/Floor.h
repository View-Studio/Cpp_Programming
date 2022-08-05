#pragma once
#include "Actor.h"
#include "Texture.h"

class Floor : public Actor
{
public:
	Floor() 
	{
		Shape = ' ';
		SortOrder = 1;
		bCollisionEnabled = false;
		MyColor = { 128, 128, 128, 255 };

		MyTexture = nullptr;
	}
	Floor(int NewX, int NewY)
	{
		Shape = ' ';
		SortOrder = 1;
		bCollisionEnabled = false;
		MyColor = { 128, 128, 128, 255 };

		Location.X = NewX;
		Location.Y = NewY;

		MyTexture = new Texture("./Data/floor.bmp");
	}
	virtual ~Floor() {}
};

