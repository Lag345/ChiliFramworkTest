#pragma once
#include "Vector2D.h"

class Box
{
public:
	Box(float x, float y, float vx, float vy);
	Vector Location;
	Vector Velocity;
	Vector Target;
	Vector RelativeTargetVector;
	Vector UnitRelativeTargetVector;
	void GetTarget(Vector in_Target);
	void UpdateLocation(float Tick);
};