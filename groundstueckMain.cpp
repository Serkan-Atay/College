#include "grundstueck.h"
#include "baugrundstueck.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	Grundstueck g1(20, 0, 10, 10);
	cout << "Flaeche: " << g1.Flaeche() << endl;

	Baugrundstueck bg1(115, 50, 100, 70, 12.5);
	cout << "Flaeche bg1: " << bg1.Flaeche() << endl;
	cout << "Kaufpreis bg1: " << bg1.Kaufpreis() << endl;

	return 0;
}
