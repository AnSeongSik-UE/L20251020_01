#include <iostream>
#include "Player.h"

APlayer::APlayer()
{
	std::cout << "APlayer ������" << std::endl;
}
APlayer::~APlayer()
{
	std::cout << "APlayer �Ҹ���" << std::endl;
}

void APlayer::Tick()
{
	AActor::Tick();

	std::cout << "APlayer Tick" << std::endl;
}