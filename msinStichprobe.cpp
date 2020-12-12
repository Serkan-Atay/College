#include <iostream>
#include "stichprobe.h"

using std::cout;
using std::cin;
using std::endl;

double* dateneingabe(unsigned int anzahl) {    
    double* zahlen = new double[anzahl];
    
    for (unsigned int i = 0; i < anzahl; i++) {
        cout << "Zahl " << i << ": ";
        cin >> zahlen[i];
    }
    
    return zahlen;
}

int main() {
    unsigned int anzahl;
    
    cout << "Wie viele Zahlen moechten Sie eingeben? ";
    cin >> anzahl;
    
    double* zahlen = dateneingabe(anzahl);
    
    double mittelwert = berechne_mittelwert(anzahl, zahlen);
    double standardabweichung = berechne_standardabweichung(anzahl, zahlen, mittelwert);
    //double median = berechne_median(anzahl, zahlen);
    
    cout << "Mittelwert: " << mittelwert << endl;
    cout << "Standardabweichung: " << standardabweichung << endl;
    //cout << "Median: " << median << endl;
    cout << "25% Quartil: " << berechne_quantil(anzahl, zahlen, 0.25) << endl;
    cout << "Median: " << berechne_quantil(anzahl, zahlen, 0.5) << endl;
    cout << "75% Quartil: " << berechne_quantil(anzahl, zahlen, 0.75) << endl;
    
    return 0;
}
