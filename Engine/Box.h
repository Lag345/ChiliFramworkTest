#pragma once
#include "Vector2D.h"

class Box
{
public:
	Box() = default;
	Box(float x, float y, float in_boxspeed);
	Vector Location;
	Vector Velocity;
	Vector Target;
	Vector RelativeTargetVector;
	Vector UnitRelativeTargetVector;
	float BoxSpeed;
	void GetTarget(Vector in_Target);
	void UpdateLocation(float Tick);
};