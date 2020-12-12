#include "motorboot.h"
#include <iostream>
using namespace std;

void Motorboot::setMotor(Motor* m)
{
	motor = m;
}

void Motorboot::bewegen()
{
	Wasserfahrzeug::bewegen();
	if (motor == NULL) return;
	for (int i = 0; i < motor->leistungsklasse; i++) {
		cout << "Toeff ";
	}
	cout << endl;
}
