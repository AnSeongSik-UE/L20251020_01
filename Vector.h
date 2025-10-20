#pragma once

//Data 저장용
//C++에서는 class와 동일하게 동작
//C#에서는 struct는 Stack영역 class는 Heap영역
struct FVector2D
{
public:
	FVector2D(int InX = 0, int InY = 0) : X(InX), Y(InY)
	{

	}
	virtual ~FVector2D() {}

	int X;
	int Y;
};