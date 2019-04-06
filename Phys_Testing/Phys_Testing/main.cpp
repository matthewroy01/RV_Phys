#include "../../RV_Phys/RV_Phys/Vector.h"

#include <iostream>
#include <string>

using namespace std;

string PrintVector(Vector3 vec)
{
	return "(" + to_string(vec.x) + ", " + to_string(vec.y) + ", " + to_string(vec.z) + ")";
}

int main()
{
	Vector3 tmp = Vector3(1.0f, 2.0f, 3.0f);
	Vector3 tmp2 = Vector3(1.0f, 1.0f, 1.0f);

	PrintVector(tmp);

	cout << "tmp + tmp2: " << PrintVector(tmp + tmp2) << endl;
	cout << "tmp - tmp2: " << PrintVector(tmp - tmp2) << endl;
	cout << "tmp * tmp2: " << PrintVector(tmp * tmp2) << endl;
	cout << endl;

	cout << "Magnitude of tmp is " << tmp.GetMagnitude() << endl;
	cout << endl;

	cout << "Dot product of tmp and tmp2 is " << Dot(tmp, tmp2) << endl;
	cout << "Cross product of tmp and tmp2 is " << PrintVector(Cross(tmp, tmp2)) << endl;
	cout << endl;

	cout << "tmp Normalized is " << PrintVector(tmp.GetNormalized()) << endl;
	cout << "tmp retains its value: " << PrintVector(tmp) << endl;
	cout << "Magnitude is still: " << tmp.GetMagnitude() << endl;
	tmp.Normalize();
	cout << "unless we call the right function: " << PrintVector(tmp) << endl;
	cout << endl;

	std::cin.get();

	return 0;
}