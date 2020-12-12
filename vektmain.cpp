#include "vekt3d.h"
#include <iostream>
using namespace std;

int main()
{
	Vekt3D a(1, 2, 3), b;
	cout << "Geben sie einen Vektor x y z ein: ";
	cin >> b;

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << "3 * " << b << " = " << 3 * b << endl;
	cout << b << " * -2 " << " = " << b * -2 << endl;

	return 0;
}
