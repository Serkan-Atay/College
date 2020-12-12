#include "cbyte.h"
#include <iostream>
using namespace std;

int main() {
    CByte a;
    a.ausgabe();
    
    a.eingabe();
    cout << a << " als Dezimalwert: " << a.dezimal() << endl;
    cout << "Stelle 3: " << a.get(3) << endl;
    a.set(3, 1);
    a.ausgabe();
        
    CByte nega = !a;
    cout << a << " negiert ist " << nega << endl;
    
    int zahl;
    cout << "Integer eingeben: ";
    cin >> zahl;
    CByte b(zahl);
    b.ausgabe();
    
    CByte c = a * b;
    cout << a << " und " << b << " ist " << c << endl;
    
    CByte d = a + b;
    cout << a << " oder " << b << " ist " << d << endl;
    
    return 0;
}
