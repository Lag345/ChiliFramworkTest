#pragma once
class Vector
{
public:
	Vector(float in_x, float in_y);
	Vector operator+ (const Vector &vec2) const;// Return type is Vector
	Vector operator* (const float Scaler);
	Vector operator* (const int Scaler);
	float x, y;
};