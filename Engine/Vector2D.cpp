#include "Vector2D.h"
#include "math.h"

Vector::Vector(float in_x, float in_y)
{
	x = in_x;
	y = in_y;
}

float Vector::GetX() const
{
	return x;
}

float Vector::GetY() const
{
	return y;
}

Vector Vector::operator+(const Vector& vec2) const
{
	Vector Added(x + vec2.x, y + vec2.y);
	return Added;
}

Vector Vector::operator*(const float Scaler)
{
	Vector Scaled = Vector(Scaler * x , Scaler * y);
	return Scaled;
}

Vector Vector::operator*(const int Scaler)
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
	float LengthSquared = float(pow(Vect.GetX(), 2.0) + pow(Vect.GetY(), 2.0));
	float Length = float(sqrt(LengthSquared));
	Vector UnitVector = { Vect.GetX() / Length, Vect.GetY() / Length };
	return UnitVector;
}
