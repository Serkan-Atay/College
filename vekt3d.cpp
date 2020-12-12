#include "vekt3d.h"
#include <iostream>
using namespace std;

// Class constructors
Vekt3D::Vekt3D()
{
	x = y = z = 0;
}

Vekt3D::Vekt3D(int a, int b, int c)
{
	x = a;
	y = b;
	z = c;
}

// Class methods
Vekt3D Vekt3D::operator+(Vekt3D v)
{
	Vekt3D result;
	result.x = x + v.x;
	result.y = y + v.y;
	result.z = z + v.z;
	return result;
}

Vekt3D Vekt3D::operator-(Vekt3D v)
{
	Vekt3D result;
	result.x = x - v.x;
	result.y = y - v.y;
	result.z = z - v.z;
	return result;
}

Vekt3D Vekt3D::operator*(int scalar)
{
	Vekt3D result;
	result.x = scalar * x;
	result.y = scalar * y;
	result.z = scalar * z;
	return result;
}

/*

und so weiter...

*/

// Global operators
ostream& operator<<(ostream& os, Vekt3D v)
{
	os << "(" << v.x << "," << v.y << "," << v.z << ")";
	return os;
}

istream& operator>>(istream& is, Vekt3D& v)
{
	is >> v.x >> v.y >> v.z;
	return is;
}

Vekt3D operator*(int scalar, Vekt3D v)
{
	return v * scalar;
}
