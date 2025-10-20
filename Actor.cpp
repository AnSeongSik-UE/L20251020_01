#include <iostream>
#include "Actor.h"

AActor::AActor()
{
	std::cout << "AActor 持失切" << std::endl;
}
AActor::~AActor()
{
	std::cout << "AActor 社瑚切" << std::endl;
}

void AActor::Tick()
{
	std::cout << "AActor Tick" << std::endl;
}
