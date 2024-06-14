#include "Vector2D.h"

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