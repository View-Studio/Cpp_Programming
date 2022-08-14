#pragma once
#include "Actor.h"
#include "Texture.h"


class Wall : public Actor
{
public:
	Wall() 
	{
		Shape = '*';
		SortOrder = 2;
		bCollisionEnabled = true;
		MyColor = { 0, 255, 0, 255 };
		MyTexture = nullptr;

	}

	Wall(int NewX, int NewY)
	{
		Shape = '*';
		SortOrder = 2;
		bCollisionEnabled = true;
		MyColor = { 0, 255, 0, 255 };


		Location.X = NewX;
		Location.Y = NewY;

		MyTexture = new Texture("./Data/wall.bmp");

	}
	virtual ~Wall() {}
};

