#ifndef VECTOR_H
#define VECTOR_H

struct Vector3
{
	Vector3(float newX, float newY, float newZ);

	// values
	float x, y, z;

	// ****TO-DO:
	// could be useful to be able to do things like Vector3.xy, but I don't know how that works

	// magnitude
	float GetMagnitude();

	// normalization
	Vector3 GetNormalized();
	void Normalize();
};

// Vector on Vector overloads
Vector3 operator+ (Vector3 ls, Vector3 rs);
Vector3 operator- (Vector3 ls, Vector3 rs);
Vector3 operator* (Vector3 ls, Vector3 rs);

// float on Vector overloads
template <typename T>
Vector3 operator* (Vector3 ls, T rs);
template <typename T>
Vector3 operator* (T ls, Vector3 rs);

#endif // !VECTOR_H