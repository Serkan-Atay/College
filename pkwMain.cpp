#include "pkw.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	Pkw p1("Beetle", 115);
	Pkw p2("3ern BMW", 340);

	if (p1 < p2) cout << "p1 ist kleiner als p2" << endl;
	else cout << "p2 ist kleiner gleich p1" << endl;

	return 0;
}
