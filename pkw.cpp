#include "pkw.h"
#include <iostream>
using std::cout;
using std::endl;

unsigned int Pkw::fgstnr_counter = 1001; // aufgabe 4.1

Pkw::Pkw(string m, unsigned int l)
{
	marke = m;
	fgstnr = fgstnr_counter++;
	leistung = l;
	cout << "Pkw der Marke " << marke << " mit Fahrgestellnummer " << fgstnr << " und Leistung " << leistung << " erzeugt" << endl;
}

string Pkw::getMarke() const
{
	return marke;
}

void Pkw::setMarke(string m)
{ 
	marke = m; 
}

unsigned int Pkw::getFgstnr() const 
{ 
	return fgstnr;
}

void Pkw::setFgstnr(unsigned int fg) 
{
	fgstnr = fg;
}

unsigned int Pkw::getLeistung() const 
{ 
	return leistung;
}

void Pkw::setLeistung(unsigned int l) 
{ 
	leistung = l; 
}

bool Pkw::operator<(Pkw b) const // aufgabe 4.1
{
	if (fgstnr < b.fgstnr) return true;
	else return false;
}
