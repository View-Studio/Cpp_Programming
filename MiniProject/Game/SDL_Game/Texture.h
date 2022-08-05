#pragma once
#include "SDL.h"
#include <string>

class Texture
{
public:
	Texture(std::string Filename, int R = 255, int G = 0, int B = 255);
	virtual ~Texture();

	SDL_Surface* MySurface;
	SDL_Texture* MyTexture;
};

