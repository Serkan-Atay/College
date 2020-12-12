#include <math.h>
#include <iostream>
#include "insertion-sort.h"

inline double quad(double zahl) { return zahl*zahl; }

double berechne_mittelwert(unsigned int anzahl, double* zahlen) {
    double summe = 0;
    unsigned int i;
    for (i = 0; i < anzahl; i++) {
        summe = summe + zahlen[i];
    }
    
    return summe / i;
}

double berechne_standardabweichung(unsigned int anzahl, double* zahlen, double mittelwert) {
    double temp = 0;
    
    unsigned int i;
    for (i = 0; i < anzahl; i++) {
        temp = temp + quad(zahlen[i] - mittelwert);
    }
    return temp / i;
}

// eigentlich ueberflÃ¼ssig das identisch zu berechne_quantil(x, y , 0.5)
double berechne_median(unsigned int anzahl, double* zahlen) {
    insertion_sort(anzahl, zahlen);
    
    if (anzahl % 2 == 0)
        return (zahlen[(anzahl-1)/2] + zahlen[anzahl/2]) / 2;
    else
        return zahlen[anzahl/2];
}

/* Formel von https://www.univie.ac.at/ksa/elearning/cp/quantitative/quantitative-86.html */
double berechne_quantil(unsigned int anzahl, double* zahlen, double p) {
    insertion_sort(anzahl, zahlen);
    
    double stelle = ((anzahl + 1) * p) - 1;
    if (stelle == floor(stelle))
        return zahlen[(int) stelle];
    else {
        unsigned int stelle_floor = floor(stelle);
        double wert = zahlen[stelle_floor];
        wert = wert + (zahlen[stelle_floor + 1]-zahlen[stelle_floor]) * (stelle - stelle_floor);
        return wert;
    }
}
