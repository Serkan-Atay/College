#include "wasserfahrzeug.h"
#include <iostream>
using namespace std;

void Wasserfahrzeug::bewegen()
{
	Fahrzeug::bewegen();
	cout << "Ich schwimme..." << endl;
}
