#include "Player.h"
#include "Engine.h"
#include "World.h"


void Player::Tick()
{
	ElapsedTime += GEngine->MyWorld->DeltaSeconds;

	if (GEngine->MyEvent.type != SDL_KEYDOWN)
	{
		return;
	}

	SDL_Keysym KeyCode = GEngine->MyEvent.key.keysym;
	if (KeyCode.sym == SDLK_q ||
		KeyCode.sym == SDLK_ESCAPE)
	{
		GEngine->Stop();
	}

	if (KeyCode.sym == SDLK_w)
	{
		if (Predict(Location.X, Location.Y - 1))
		{
			Location.Y--;
			SpriteIndexY = 2;
		}
	}
	if (KeyCode.sym == SDLK_a)
	{
		if (Predict(Location.X - 1, Location.Y))
		{
			Location.X--;
			SpriteIndexY = 0;
		}

	}
	if (KeyCode.sym == SDLK_s)
	{
		if (Predict(Location.X, Location.Y + 1))
		{
			Location.Y++;
			SpriteIndexY = 3;
		}
	}
	if (KeyCode.sym == SDLK_d)
	{
		if (Predict(Location.X + 1, Location.Y))
		{
			Location.X++;
			SpriteIndexY = 1;
		}
	}

	if (KeyCode.sym == SDLK_p)
	{
		GEngine->SaveMap("Save.txt");
	}
}

void Player::Render()
{
	int SpriteWidth = MyTexture->MySurface->w / 5;
	int SpriteHeight = MyTexture->MySurface->h / 5;
	
	
	SDL_Rect SourceRect = { 
	SpriteWidth * SpriteIndexX,
	SpriteHeight * SpriteIndexY,
	SpriteWidth,
	SpriteHeight
	};
	SDL_Rect Destination = { Location.X * Width, Location.Y * Height,
		Width, Height };
	SDL_RenderCopy(GEngine->MyRenderer, MyTexture->MyTexture,
		&SourceRect,
		&Destination);

	if (ElapsedTime / 200 >= 1)
	{
		SpriteIndexX++;
		ElapsedTime = 0;
	}
	SpriteIndexX %= 5;
}

bool Player::Predict(int NewX, int NewY)
{
	for (auto CurrentActor : GEngine->MyWorld->ActorList)
	{
		if (CurrentActor->bCollisionEnabled &&
			CurrentActor->Location.X == NewX &&
			CurrentActor->Location.Y == NewY)
		{
			return false;
		}
	}

	return true;
}
