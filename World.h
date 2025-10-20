#pragma once

#include <vector>

#include "Actor.h"

//���漱��
class AActor;

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	virtual void Tick();
	virtual void Render();

	std::vector<AActor*> GetAllActors() const;
	AActor* SpawnActor(AActor* NewActor);
protected:
	std::vector<AActor*> Actors;
};