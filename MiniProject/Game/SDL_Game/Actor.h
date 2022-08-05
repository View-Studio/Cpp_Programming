#pragma once
#include "Vector2D.h"
#include "Color.h"
#include "Texture.h"

class Actor
{
public:
	Actor() : Shape(' ')
	{
		MyTexture = nullptr;
	}

	Actor(int NewX, int NewY) : Shape(' ')
	{
		Location.X = NewX;
		Location.Y = NewY;

		MyTexture = nullptr;
	}

	virtual ~Actor()
	{
		if (MyTexture)
		{
			delete MyTexture;
		}
	}

	Vector2D Location;

	char Shape;

	virtual void Tick();
	virtual void Render();

	int SortOrder = 0;

	bool bCollisionEnabled = true;

	Color MyColor;
	
	int Width = 60;
	int Height = 60;

	Texture* MyTexture = nullptr;

	Uint64 ElapsedTime;

};

