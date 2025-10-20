#pragma once

#include "Vector.h"

class AActor
{
public:
	AActor();
	virtual ~AActor();

	virtual void Tick();

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
private:
	FVector2D Location;
};

