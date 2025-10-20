#include "Actor.h"

AActor::AActor() : ZOrder(0), Shape(' '), Location(0, 0)
{
}
AActor::~AActor()
{
}

void AActor::Tick()
{
}
void AActor::Render()
{
	COORD Position;
	Position.X = Location.X;
	Position.Y = Location.Y;

	SetConsoleCursorPosition((HANDLE)GetStdHandle(STD_OUTPUT_HANDLE), Position);
	std::cout << Shape;
}
