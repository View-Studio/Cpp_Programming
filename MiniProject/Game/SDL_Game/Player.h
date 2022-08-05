#pragma once
#include "Actor.h"
#include "Wall.h"
#include "Texture.h"

class Player : public Actor
{
public:
	Player()
	{
		Shape = 'P';
		SortOrder = 3;
		Location.X = 1;
		Location.Y = 1;
		bCollisionEnabled = false;
		MyColor = { 0, 0, 255, 255 };
		MyTexture = nullptr;
	}

	Player(int NewX, int NewY)
	{
		Shape = 'P';
		SortOrder = 3;
		bCollisionEnabled = false;
		MyColor = { 0, 0, 255, 255 };

		Location.X = NewX;
		Location.Y = NewY;

		MyTexture = new Texture("./Data/player.bmp");
	}

	virtual ~Player() {}

	virtual void Tick() override;
	virtual void Render() override;

	bool Predict(int NewX, int NewY);

	int SpriteIndexX = 0;
	int SpriteIndexY = 0;

};

