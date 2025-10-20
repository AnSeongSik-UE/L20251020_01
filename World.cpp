#include "World.h"

UWorld::UWorld()
{
}
UWorld::~UWorld()
{
}

void UWorld::GetAllActors(std::vector<AActor*>& OutActors) const
{
	OutActors = Actors;
}
//���丮 ����(������ �� �Լ��� ��)
AActor* UWorld::SpawnActor(AActor* NewActor)
{
	Actors.push_back(NewActor);

	return NewActor;
}
void UWorld::Tick()
{
	for (auto Actor : Actors)
	{
		Actor->Tick();
	}
}
void UWorld::Render()
{
	for (auto Actor : Actors)
	{
		Actor->Render();
	}
}