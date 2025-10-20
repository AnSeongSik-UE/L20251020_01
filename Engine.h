#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

#include "World.h"
#include "Wall.h"
#include "Floor.h"
#include "Player.h"
#include "Monster.h"
#include "Goal.h"

class UWorld;

class FEngine
{
public:
	FEngine();
	virtual ~FEngine();

	virtual void Init();
	virtual void Run();
	virtual void Term();

	__forceinline UWorld* GetWorld() const
	{
		return World;
	}
	__forceinline int GetKeyCode() const
	{
		return KeyCode;
	}

protected:
	void Input();
	void Tick();
	void Render();

	class UWorld* World;

	bool bIsRunning = true;

	int KeyCode = 0;
};

