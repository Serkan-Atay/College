#include "Ampel.h"
#include <iostream>
using namespace std;

CAmpel::CAmpel()
{
	zustand = 0;
	verbunden = false;
}

void CAmpel::schalte()
{
	zustand = (zustand + 1) % 4;
}

void CAmpel::operator++()
{
	schalte();
	if (verbunden) verbindung->schalte();
}

bool CAmpel::verbinde(CAmpel* ca)
{
	if (verbunden) return false;
	verbindung = ca;
	verbunden = true;
	verbindung->zustand = (verbindung->zustand + 2) % 4;
	verbindung->verbindung = this;
	verbindung->verbunden = true;
	return true;
}

void CAmpel::reset()
{
	zustand = 0;
	if (verbunden) verbindung->zustand = 2;
}


// -------gegeben------------------------------------------------

ostream& operator<<(ostream& out, CAmpel a)
{
	out << char(218) << char(196) << char(191) << endl;

	out << char(179);
	if (a.zustand == 0 || a.zustand == 1) out << char(219) << char(179) << endl;
	else out << " " << char(179) << endl;
	out << char(195) << char(196) << char(180) << endl;

	out << char(179);
	if (a.zustand == 1 || a.zustand == 3) out << char(219) << char(179) << endl;
	else out << " " << char(179) << endl;
	out << char(195) << char(196) << char(180) << endl;

	out << char(179);
	if (a.zustand == 2) out << char(219) << char(179) << endl;
	else out << " " << char(179) << endl;
	out << char(192) << char(196) << char(217) << endl;

	return out;
}
