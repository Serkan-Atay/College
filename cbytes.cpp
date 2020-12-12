#include "cbyte.h"
#include <iostream>
#include <math.h>
using namespace std;

CByte::CByte() {
    for (int i = 0; i < 8; i++)
        bit[i] = 0;
}

CByte::CByte(int x) {
    // Zu grosse Zahlen auf 00000000 setzen
    if (x > 255) {
        for (int i = 0; i < 8; i++)
            bit[i] = 0;
        return;
    }
    
    for (int i = 7; i >= 0; i--) {
        if (x >= pow(2, i)) {
            bit[i] = 1;
            x -= pow(2, i);
        } else {
            bit[i] = 0;
        }
    }
}

void CByte::eingabe() {
    cout << "Byte bitweise eingeben (little endian)" << endl;
    for (int i = 7; i >= 0; i--) {
        cout << "Stelle " << 8-i << ": ";
        cin >> bit[i];
    }
}

void CByte::ausgabe() {
    for (int i = 7; i >= 0; i--)
        cout << bit[i];
    cout << endl;
}

unsigned short int CByte::dezimal() {
    unsigned short int dezwert = bit[0];
    
    for (int i = 7; i >= 1; i--)
        dezwert += bit[i] * pow(2, i);
    
    return dezwert;
}

CByte CByte::operator!() {
    CByte neg;
    for (int i = 0; i < 8; i++) {
        if (bit[i] == 0)
            neg.set(i, 1);
    }
    return neg;
}

int CByte::get(unsigned short int pos) {
    return bit[8-pos];
}

void CByte::set(unsigned short int pos, int wert) {
    bit[8-pos] = wert;
}

// Globate Funktionen
CByte operator*(CByte a, CByte b) {
    CByte ergebnis;
    
    for (int i = 1; i <= 8; i++) {
        if (a.get(i) == 1 && b.get(i) == 1)
            ergebnis.set(i, 1);
    }
    
    return ergebnis;
}

CByte operator+(CByte a, CByte b) {
    CByte ergebnis;
    
    for (int i = 1; i <= 8; i++) {
        if (a.get(i) == 1 || b.get(i) == 1)
            ergebnis.set(i, 1);
    }
    
    return ergebnis;
}

ostream& operator<<(ostream& os, CByte cb) {
    for (int i = 1; i <= 8; i++) {
        os << cb.get(i);
    }
    return os;
}
