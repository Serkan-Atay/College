#include <iostream>
using namespace std;

class Vekt3D
{
public:
	Vekt3D();
	Vekt3D(int a, int b, int c);
	Vekt3D operator+(Vekt3D v);
	Vekt3D operator-(Vekt3D v);
	Vekt3D operator*(int scalar);
	friend ostream& operator<<(ostream& os, Vekt3D v);
	friend istream& operator>>(istream& is, Vekt3D& v);
	friend Vekt3D operator*(int scalar, Vekt3D v);

private:
	int x, y, z;
};
