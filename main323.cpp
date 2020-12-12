#include "auto.h"
#include "fahrrad.h"
#include "motorboot.h"
#include "kanu.h"
#include "parkplatz.h"
#include <iostream>
using std::cout;
using std::endl;

void main()
{
	// Parkplatz am Hafen einrichten
	Parkplatz parkplatz = Parkplatz();
	// Fahrzeuge bauen
	Auto
		*a1 = new Auto(),
		*a2 = new Auto();
	Fahrrad *f1 = new Fahrrad(),
		*f2 = new Fahrrad();
	Motorboot *mb1 = new Motorboot(), *mb2 = new Motorboot();
	Kanu
		*k1 = new Kanu,
		*k2 = new Kanu();
	// Motoren einkaufen und einbauen
	Motor *fiat = new Motor(1), *vw = new Motor(2), *porsche =
		new Motor(4);
	a1->setMotor(fiat);
	a2->setMotor(porsche);
	mb1->setMotor(vw);
	// Am Morgen: Alle Fahrzeuge parken
	parkplatz.enqueue(a1);
	parkplatz.enqueue(mb2);
	parkplatz.enqueue(f1);
	parkplatz.enqueue(k2);
	parkplatz.enqueue(mb1);
	parkplatz.enqueue(k1);
	parkplatz.enqueue(a2);
	parkplatz.enqueue(f2);
	while (parkplatz.getSize() > 0) {
		Fahrzeug* curr = parkplatz.dequeue();
		curr->bewegen();
		delete curr;
		cout << "--------------------------" << endl;
	}
}
