#include <iostream>
#include "Actor.h"
#include "Player.h"

int main()
{
	AActor* AActors[2];
	AActors[0] = new AActor();
	AActors[1] = new APlayer();

	for (int i = 0; i < 2; ++i)
	{
		AActors[i]->Tick();	//���� �ٲ�, ���� ����, ������, Polymorphism
	}

	return 0;
}