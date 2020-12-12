//#include <iostream>
#include <string>
#include <exception>
using namespace std;

// Konstruktoren
Bruch::Bruch(int z, int n) {
    zaehler = z;
    nenner = n;
}

Bruch::Bruch(int n) {
    zaehler = n;
    nenner = 1;
}

Bruch::Bruch() {
    zaehler = 0;
    nenner = 1;
    kuerze();
}

// Private Methoden
void Bruch::kuerze() {
    int c;
    int x = zaehler;
    int y = nenner;
    if (zaehler < 0) x = -x;
    if (nenner <0 ) y = -y;
    while (y != 0) {
        c = x % y;
        x = y;
        y = c;
    }
    
    zaehler = zaehler / x;
    nenner = nenner / x;
}

// Oeffentliche Methoden
/*void Bruch::eingabe() {
    cout << "Zaehler: ";
    cin >> zaehler;
    cout << "Nenner: ";
    cin >> nenner;
    kuerze();
}*/


void Bruch::eingabe(int z, int n) {
    zaehler = z;
    nenner = n;
    kuerze();
}

/*void Bruch::ausgabe() {
    if (zaehler == 0 || nenner == 1) cout << zaehler;
    else if (zaehler == nenner) cout << "1";
    else if (zaehler > nenner) {
        cout << zaehler / nenner << "_" << zaehler % nenner << "/" << nenner;
    }
    else cout << zaehler << "/" << nenner;
}*/

string Bruch::ausgabe() {
    if (zaehler == 0 || nenner == 1) return to_string(zaehler);
    else if (zaehler == nenner) return "1";
    else if (zaehler > nenner) {
        return to_string(zaehler / nenner) + "_" + to_string(zaehler % nenner) + "/" + to_string(nenner);
    }
    else return to_string(zaehler) + "/" + to_string(nenner);
}
 

Bruch Bruch::add(Bruch summand) {
    Bruch ergebnis = Bruch();
    ergebnis.zaehler = (zaehler * summand.nenner) + (summand.zaehler * nenner);
    ergebnis.nenner = nenner * summand.nenner;
    ergebnis.kuerze();
    
    return ergebnis;
}

Bruch Bruch::sub(Bruch summand) {
    Bruch ergebnis = Bruch();
    ergebnis.zaehler = (zaehler * summand.nenner) - (summand.zaehler * nenner);
    ergebnis.nenner = nenner * summand.nenner;
    ergebnis.kuerze();
    
    return ergebnis;
}

Bruch Bruch::mul(Bruch faktor) {
    Bruch ergebnis;
    ergebnis.zaehler = zaehler * faktor.zaehler;
    ergebnis.nenner = nenner * faktor.nenner;
    ergebnis.kuerze();

    return ergebnis;
}

Bruch Bruch::div(Bruch dividend) {
    if (dividend.zaehler == 0) throw "division by zero";
    
    Bruch ergebnis;
    ergebnis.zaehler = zaehler * dividend.nenner;
    ergebnis.nenner = nenner * dividend.zaehler;
    ergebnis.kuerze();
    
    return ergebnis;
}
