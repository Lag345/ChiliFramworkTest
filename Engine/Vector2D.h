#pragma once
class Vector
{
public:
	Vector() = default;
	Vector(float in_x, float in_y);
	Vector operator+ (const Vector &vec2) const;// Return type is Vector
	Vector operator* (const float Scaler) const;
	Vector operator* (const int Scaler) const;
	Vector operator- (const Vector& vec2) const;
	static Vector Normalize(Vector& Vect); //TODO: Use pointers as used by Chili after learning it
	float x, y;
};