#include <iostream>
#include "Player.h"

APlayer::APlayer()
{
	ZOrder = 1003;
}
APlayer::~APlayer()
{
}

void APlayer::Tick()
{
	int KeyCode = GEngine->GetKeyCode();

	if (KeyCode == 'w')
	{
		Location.Y--;
	}
	else if(KeyCode == 's')
	{
		Location.Y++;
	}
	else if (KeyCode == 'a')
	{
		Location.X--;
	}
	else if (KeyCode == 'd')
	{
		Location.X++;
	}
}