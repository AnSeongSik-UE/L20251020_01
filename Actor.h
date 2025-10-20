#pragma once

#include <iostream>
#include <Windows.h>

#include "Vector.h"
#include "Actor.h"

class AActor
{
public:
	AActor();
	virtual ~AActor();

	virtual void Tick();
	virtual void Render();

	//inline�� �ش� �ڵ� ��ü�� �ҷ��ͼ� ����
	//inline�� �����Ϸ��� �� ���� ����� ������
	//__force�� �������� �ٷ� ó���ϵ��� ������ / ���־�Ʃ�����
	//const�� �ش� �Լ� ������ �� ������ ����
	__forceinline FVector2D GetActorLocation() const
	{
		return Location;
	}

	void SetActorLocation(FVector2D Value)
	{
		//Location = Value; //��������� �����Ҽ��� ���Ҽ��� ����
		Location.X = Value.X;
		Location.Y = Value.Y;
	}

	__forceinline char GetShape()
	{
		return Shape;
	}

	void SetShape(char Value)
	{
		Shape = Value;
	}

protected:
	FVector2D Location;
	char Shape;
};

