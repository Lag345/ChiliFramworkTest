#include "Box.h"

Box::Box(float x, float y, float vx, float vy)
{
	Location = { x,y };
	Velocity = { vx, vy };
	Target = Location;
}

void Box::GetTarget(Vector in_Target)
{
	Target = in_Target;
	RelativeTargetVector = Target - Location;
	UnitRelativeTargetVector = Vector::Normalize(RelativeTargetVector);
}

void Box::UpdateLocation(float Tick)
{
	if (RelativeTargetVector.GetX() != 0 )
	{
		Location.x = Location.x + Velocity.GetX() * UnitRelativeTargetVector.GetX() * Tick;
	}
	if (RelativeTargetVector.GetY() != 0)
	{
		Location.y = Location.y + Velocity.GetY() * UnitRelativeTargetVector.GetY() * Tick;
	}
}
