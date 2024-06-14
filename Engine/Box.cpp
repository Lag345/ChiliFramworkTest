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
}

void Box::UpdateLocation(float Tick)
{
	if (Target.GetX() <= Location.GetX())
	{
		Location.x = Location.x - Velocity.GetX() * Tick;
	}
	if (Target.GetX() >= Location.GetX())
	{
		Location.x = Location.x + Velocity.GetX() * Tick;
	}
	if (Target.GetY() <= Location.GetY())
	{
		Location.y = Location.y - Velocity.GetY() * Tick;
	}
	if (Target.GetY() >= Location.GetY())
	{
		Location.y = Location.y + Velocity.GetY() * Tick;
	}
}
