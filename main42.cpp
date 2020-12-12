#include "bruch.h"
#include "bruch.cpp"
#include <iostream>
using namespace std;

int main() {
    Bruch b1, b2, ergebnis;
    int z, n;
    

    // Eingabe
    cout << "Geben Sie den Bruch b1 ein" << endl;
    cout << "Zaehler: ";
    cin >> z;
    cout << "Nenner: ";
    cin >> n;
    b1.eingabe(z, n);
    
    cout << "Geben Sie den Bruch b2 ein" << endl;
    cout << "Zaehler: ";
    cin >> z;
    cout << "Nenner: ";
    cin >> n;
    b2.eingabe(z, n);;
    

    // Addition
    ergebnis = b1.add(b2);
    cout << b1.ausgabe() << " + " << b2.ausgabe() << " = " << ergebnis.ausgabe() << endl;
    
    // Subtraktion
    ergebnis = b1.sub(b2);
    cout << b1.ausgabe() << " - " << b2.ausgabe() << " = " << ergebnis.ausgabe() << endl;
    
    // Multiplikation
    ergebnis = b1.mul(b2);
    cout << b1.ausgabe() << " * " << b2.ausgabe() << " = " << ergebnis.ausgabe() << endl;
    
    // Division
    ergebnis = b1.div(b2);
    cout << b1.ausgabe() << " / " << b2.ausgabe() << " = " << ergebnis.ausgabe() << endl;
    

    return 0;
}
