#include <iostream>
#include "Actor.h"

AActor::AActor()
{
	std::cout << "AActor ������" << std::endl;
}
AActor::~AActor()
{
	std::cout << "AActor �Ҹ���" << std::endl;
}

void AActor::Tick()
{
	std::cout << "AActor Tick" << std::endl;
}
