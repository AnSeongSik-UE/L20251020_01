#pragma once
#include <vector>
//���漱��
class AActor;

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	std::vector<AActor*> GetAllActors() const;
	AActor* SpawnActor(AActor* NewActor);
protected:
	std::vector<AActor*> Actors;
};