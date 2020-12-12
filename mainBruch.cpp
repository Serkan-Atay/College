#include <iostream>
#include "bruch.h"
using namespace std;

int main()
{
	Bruch a(1, 3), b;

	int z, n;
	cout << "Geben Sie einen Zaehler ein: ";
	cin >> z;
	cout << "Geben Sie einen Nenner ein: ";
	cin >> n;
	b.set(z, n);

	Bruch sum = a + b;
	cout << a.toString() << " + " << b.toString() << " = " << sum.toString() << endl;
	Bruch diff = a - b;
	cout << a.toString() << " - " << b.toString() << " = " << diff.toString() << endl;
	Bruch mul = a * b;
	cout << a.toString() << " * " << b.toString() << " = " << mul.toString() << endl;
	Bruch div = a / b;
	cout << a.toString() << " / " << b.toString() << " = " << div.toString() << endl;

	return 0;
}
