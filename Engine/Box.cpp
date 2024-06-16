#include "Box.h"

Box::Box(float x, float y, float in_boxspeed)
	:
	Location({ x,y }),
	BoxSpeed(in_boxspeed),
	Target(Location)
{

}

void Box::GetTarget(Vector in_Target)
{
	Target = in_Target;
	RelativeTargetVector = Target - Location;
	UnitRelativeTargetVector = Vector::Normalize(RelativeTargetVector);
}

void Box::UpdateLocation(float Tick)
{
	if (RelativeTargetVector.x != 0 && RelativeTargetVector.y != 0)
	{
		Location = Location + UnitRelativeTargetVector * BoxSpeed * Tick;
	}
}
