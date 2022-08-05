#include "Engine.h"

using namespace std;

int SDL_main(int argc, char* argv[])	
{
	Engine* MyEngine = GEngine->GetInstance();

	MyEngine->LoadMap("level1.txt");
	MyEngine->Run();

	delete MyEngine;

	return 0;
}