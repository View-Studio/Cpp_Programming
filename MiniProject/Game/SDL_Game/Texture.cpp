#include "Texture.h"
#include "Engine.h"

Texture::Texture(std::string Filename, int R, int G, int B)
{
	//for cpu
	MySurface = SDL_LoadBMP(Filename.c_str());
	SDL_SetColorKey(MySurface, 1,
		SDL_MapRGB(MySurface->format, R, G, B));
	//for gpu
	MyTexture = SDL_CreateTextureFromSurface(GEngine->MyRenderer,
		MySurface);
}

Texture::~Texture()
{
	SDL_DestroyTexture(MyTexture);
	SDL_FreeSurface(MySurface);
}
