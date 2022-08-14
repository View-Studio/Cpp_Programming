#include "World.h"
#include "Actor.h"

World::World()
{
}

World::~World()
{
	for (auto Current : ActorList)
	{
		delete Current;
	}

	ActorList.clear();
}

void World::SpawnActor(Actor* NewActor)
{
	ActorList.push_back(NewActor);
}


std::vector<Actor*>::iterator World::DestoryActor(Actor* DeletedActor)
{
	return ActorList.erase(find(ActorList.begin(),
		ActorList.end(), DeletedActor));
}

void World::Tick()
{
	DeltaSeconds = SDL_GetTicks64() - LastTick;
	for (Actor* MyActor : ActorList)
	{
		MyActor->Tick();
	}
}

void World::Render()
{
	for (Actor* MyActor : ActorList)
	{
		MyActor->Render();
	}
	LastTick = SDL_GetTicks64();
}