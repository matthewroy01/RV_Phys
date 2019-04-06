#include "stdafx.h"

#include "Vector.h"

#include <math.h>

Vector3::Vector3(float newX, float newY, float newZ)
{
	x = newX;
	y = newY;
	z = newZ;
}

float Vector3::GetMagnitude()
{
	return sqrtf((x * x) +
		(y * y) +
		(z * z));
}

Vector3 Vector3::GetNormalized()
{
	float magnitude = GetMagnitude();

	return Vector3(x / magnitude,
		y / magnitude,
		z / magnitude);
}


void Vector3::Normalize()
{
	Vector3 tmp = GetNormalized();

	x = tmp.x;
	y = tmp.y;
	z = tmp.z;
}

Vector3 operator+ (Vector3 ls, Vector3 rs)
{
	return Vector3(ls.x + rs.x,
		ls.y + rs.y,
		ls.z + rs.z);
}

Vector3 operator- (Vector3 ls, Vector3 rs)
{
	return Vector3(ls.x - rs.x,
		ls.y - rs.y,
		ls.z - rs.z);
}

Vector3 operator* (Vector3 ls, Vector3 rs)
{
	return Vector3(ls.x * rs.x,
		ls.y * rs.y,
		ls.z * rs.z);
}

template <typename T>
Vector3 operator* (Vector3 ls, T rs)
{
	return Vector3(ls.x * rs,
		ls.y * rs,
		ls.z * rs);
}

template <typename T>
Vector3 operator* (T ls, Vector3 rs)
{
	return Vector3(ls.x * rs,
		ls.y * rs,
		ls.z * rs);
}