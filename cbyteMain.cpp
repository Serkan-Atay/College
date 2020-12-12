#include "cbyte.h"
#include <iostream>
using namespace std;

int main()
{
	CByte a(34), b;
	cout << a << endl;

	cout << "Geben Sie ein Byte ein: ";
	cin >> b;

	cout << b << " to decimal: " << b.dezimal() << endl;
	cout << a << " & " << b << " = " << (a & b) << endl;
	cout << a << " | " << b << " = " << (a | b) << endl;
	cout << a << " ^ " << b << " = " << (a ^ b) << endl;
	cout << "not " << b << " = " << !b << endl;

	return 0;
}
