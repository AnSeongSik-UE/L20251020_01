#pragma once

#include "Actor.h"

class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();

	virtual void Tick() override;

	//overload
	//함수명이 같고 인자가 다름
	//name mangling 
	void Jump()
	{

	}
	void Jump(int a)
	{

	}
	void Jump(float b)
	{

	}
	//
};