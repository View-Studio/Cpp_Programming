#pragma once
#include <string>
#include "SDL.h"

#pragma comment(lib, "SDL2.lib")
#pragma comment(lib, "SDL2main.lib")

class World;
class Actor;

class Engine
{
protected:
	Engine();

	static Engine* Instance;

public:
	virtual ~Engine();

	static Engine* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new Engine();
		}

		return Instance;
	}

	World* MyWorld;

	void SaveMap(std::string MapFilename);
 	void LoadMap(std::string MapFilename);
	void Run();

	void Stop();

	void Input();

	bool bIsRunning = true;

	static bool Compare(Actor* F, Actor* S);

	//int KeyCode;

	SDL_Window* MyWindow;
	SDL_Renderer* MyRenderer;
	SDL_Event MyEvent;
};


#define GEngine Engine::GetInstance()