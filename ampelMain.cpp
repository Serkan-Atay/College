#include <iostream>
#include "Ampel.h"
using namespace std;

void zeigeAmpeln(CAmpel a, CAmpel b);

void main()
{
	CAmpel a1, a2;			// Ampeln anlegen (A1: rot , A2: rot)
	zeigeAmpeln(a1, a2);

	cout << "erste Ampel vorschalten (A1: rot/gelb , A2: rot)" << endl;
	++a1;					// erste Ampel vorschalten (A1: rot/gelb , A2: rot)
	zeigeAmpeln(a1, a2);

	cout << "zweite Ampel 2x vorschalten (A1: rot/gelb , A2: grün)" << endl;
	++a2; ++a2;				// zweite Ampel 2x vorschalten (A1: rot/gelb , A2: grün)
	zeigeAmpeln(a1, a2);

	cout << "beide Ampel resetten (A1: rot , A2: rot)" << endl;
	a1.reset(); a2.reset();	// beide Ampel resetten (A1: rot , A2: rot)
	zeigeAmpeln(a1, a2);

	cout << "Ampeln verbinden (A1: rot , A2: grün)" << endl;
	if (a1.verbinde(&a2)) cout << "\nVerbunden.." << endl; // Ampeln verbinden (A1: rot , A2: grün)
	else cout << "\nFehler" << endl;
	zeigeAmpeln(a1, a2);

	cout << "erste Ampel vorschalten (A1:rot/gelb , A2: gelb)" << endl;
	++a1;					// erste Ampel vorschalten (A1:rot/gelb , A2: gelb)
	zeigeAmpeln(a1, a2);

	cout << "erste Ampel vorschalten (A1:grün , A2: rot)" << endl;
	++a1;					// erste Ampel vorschalten (A1:grün , A2: rot)
	zeigeAmpeln(a1, a2);

	cout << "Nochmal Ampeln verbinden (Fehler)" << endl;
	if (a1.verbinde(&a2)) cout << "\nVerbunden.." << endl; // Nochmal Ampeln verbinden (Fehler)
	else cout << "\nFehler" << endl;
	zeigeAmpeln(a1, a2);

	cout << "zweite Ampel vorschalten (A1:gelb , A2: rot/gelb)" << endl;
	++a2;					// zweite Ampel vorschalten (A1:gelb , A2: rot/gelb)
	zeigeAmpeln(a1, a2);
}

void zeigeAmpeln(CAmpel a, CAmpel b)
{
	cout << endl << "a1:" << endl;
	cout << a << endl;
	cout << "a2:" << endl;
	cout << b << endl;
	cout << endl;
	system("pause");
}
