#include "landfahrzeug.h"
#include <iostream>
using namespace std;

void Landfahrzeug::bewegen()
{
	Fahrzeug::bewegen();
	cout << "Ich fahre..." << endl;
}
