#include "Vector2D.h"
#include "math.h"

Vector::Vector(float in_x, float in_y)
{
	x = in_x;
	y = in_y;
}

Vector Vector::operator+(const Vector& vec2) const
{
	Vector Added(x + vec2.x, y + vec2.y);
	return Added;
}

Vector Vector::operator*(const float Scaler) const
{
	Vector Scaled = Vector(Scaler * x , Scaler * y);
	return Scaled;
}

Vector Vector::operator*(const int Scaler) const
{
	Vector Scaled = Vector(Scaler * x, Scaler * y);
	return Scaled;
}

Vector Vector::operator-(const Vector& vec2) const
{
	Vector Substracted(x - vec2.x, y - vec2.y);
	return Substracted;
}

Vector Vector::Normalize(Vector& Vect)
{
	float LengthSquared = float(pow(Vect.x, 2.0) + pow(Vect.y, 2.0));
	float Length = float(sqrt(LengthSquared));
	Vector UnitVector = { Vect.x / Length, Vect.y / Length };
	return UnitVector;
}
