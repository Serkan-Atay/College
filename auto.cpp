#include "auto.h"
#include <iostream>
using namespace std;

void Auto::setMotor(Motor* m)
{
	motor = m;
}

void Auto::bewegen()
{
	Landfahrzeug::bewegen();
	if (motor == NULL) return;
	for (int i = 0; i < motor->leistungsklasse; i++) {
		cout << "Brumm ";
	}
	cout << endl;
}
