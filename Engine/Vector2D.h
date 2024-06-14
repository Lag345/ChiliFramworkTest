#pragma once
class Vector
{
public:
	Vector() = default;
	Vector(float in_x, float in_y);
	float GetX() const;
	float GetY() const;
	Vector operator+ (const Vector &vec2) const;// Return type is Vector
	Vector operator* (const float Scaler);
	Vector operator* (const int Scaler);
	float x, y;
};